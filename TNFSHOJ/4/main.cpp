#include <iostream>
#include <bitset>
#include <set>
#include <algorithm>
#include <vector>

//http://forum.tfcis.org/forum.php?mod=viewthread&tid=147
//https://puzzlersworld.com/interview-questions/google-code-jam/charging-chaos-solution-google-codejam/

using namespace std;

int T , n , l ;
long long int arr[1005] ;
long long int ou[1005] , de[1005] ;

int count(long long int num)
//計算需要反轉幾次位元
{
    int ans=0 ;
    while (num!=0)
    {
        if (num&1) ans++ ;
        num >>= 1 ;
    }
    return ans;
}

bool check(long long int data)
//存在數種可能的data，找到data可使所有電器僅交換特定位元即可得到匹配
//若data不存在則IMPOSSIBLE
{
    long long int ouc[1005] , dec[1005] ;
    for (int i=0 ; i<n ; ++i)
    {
        ouc[i] = ou[i] ^ data ;
        //測試data異或運算後是否可以使所有電器與插座相容
        dec[i] = de[i] ;
    }
    sort(ouc , ouc+n) ;
    sort(dec , dec+n) ;
    for (int i=0 ; i<n ; ++i) if (ouc[i]!=dec[i]) return 0;
    //改二分搜試試看
    return 1;
}

long long int readBits()
//讀入字串並轉換為十進位整數
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    cin >> s ;
    long long int ans=0 ;
    for (int i=0 ; i<s.size() ; i++)
    {
        ans <<= 1 ;
        ans += s[i]-'0' ;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T ;
    for(int num=1 ; num<=T ; ++num)
    {
        cin >> n >> l ;
        for (int i=0 ; i<n ; ++i) ou[i] = readBits() ;
        for (int i=0 ; i<n ; ++i) de[i] = readBits() ;
        for (int i=0 ; i<n ; ++i)
        {
            arr[i] = ou[i] ^ de[0] ;
            //在s中放入所有可能使電器與插座異或後匹配的異或值
        }
        set<long long int> s(arr , arr+n) ;
        int best=1e9 ;
        for(auto i : s)
        {
            if(check(i)) best = min(count(i) , best) ;
        }
        if(best==1e9) cout << "Case #" << num << ": IMPOSSIBLE\n" ;
        else cout << "Case #" << num << ": " << best << "\n" ;
    }
    return 0;
}