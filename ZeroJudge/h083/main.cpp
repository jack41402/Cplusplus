#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main ()
{
    //兩支籤能成為聖筊的條件
    // 若且唯若其中一支籤的頭與尾相同，且有一字串符合該字串的中間段
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int m , ans=0 ;
    string str ;
    vector<string> arr ;
    cin >> m ;
    for (int i=0 ; i<m ; ++i)
    {
        cin >> str ;
        arr.emplace_back(str) ;
    }
    set<string> s(arr.begin() , arr.end()) ;
    for (auto i : s)
    {
        for (int j=1 ; j*2<i.size() ; ++j)
        {
            string A=i.substr(0 , j) , possible=i.substr(i.size()-j) ;
            if (A!=possible) continue ;
            string B=i.substr(j , i.size()-2*j) ;
            if (s.find(B)!=s.end()) ans++ ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}
