#include <iostream>
#include <cstring>

using namespace std;

string str1[5] , str2[5] , balance[5] ;
int coin[15] ;

int condition(string str)
{
    if (str=="even") return 0;
    if (str=="up") return 1;
    if (str=="down") return -1;
    return -2 ;
}

int compare(string a , string b)
{
    int a_sum=0 , b_sum=0 ;
    for (int i=0 ; i<a.size() ; ++i) a_sum += coin[a[i]-'A'] ;
    for (int i=0 ; i<b.size() ; ++i) b_sum += coin[b[i]-'A'] ;
    return a_sum-b_sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n ;
    cin >> n ;
    while (n--)
    {
        for (int i=0 ; i<3 ; ++i)
        {
            cin >> str1[i] >> str2[i] >> balance[i] ;
        }
        for (int p=0 ; p<12 ; ++p)
        {
            bool c=false ;
            for (int q=0 ; q<=1 ; ++q)
            {
                memset(&coin , 0 , sizeof(coin)) ;
                (q==0) ? coin[p]=1 : coin[p]=-1 ;
                bool flag=true ;
                for (int i=0 ; i<3 ; ++i)
                {
                    if (compare(str1[i] , str2[i]) != condition(balance[i]))
                    {
                        flag = false ;
                        break ;
                    }
                }
                if (flag)
                {
                    c = true ;
                    char ans='A' ;
                    ans += p ;
                    cout << ans << " is the counterfeit coin and it is " ;
                    if (coin[p]<0) cout << "light.\n" ;
                    else cout << "heavy.\n" ;
                    break ;
                }
            }
            if (c) break ;
        }
    }
    return 0;
}