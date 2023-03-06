#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib>

using namespace std;

vector<long long int> prime ;
bool not_prime[1000000000]={false} ;
const long long int maxx=1000000000 ;

void find()
{
    prime.emplace_back(2) ;
    for (long long int i=3 ; i<=maxx ; i+=2)
    {
        if (!not_prime[i])
        {
            prime.emplace_back(i) ;
            //cout << i << endl ;
            for (long long int j=i*i ; j<=maxx ; j+=i+i)
            {
                not_prime[j] = true ;
                //cout << j << endl ;
            }
            //cout << i << endl ;
        }

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t , n ;
    string str ;
    find() ;
    set<long long int> s(prime.begin() , prime.end()) ;
    cin >> t ;
    while (t--)
    {
        bool flag=false ;
        cin >> str ;
        for (int i=0 ; i<str.size() ; ++i)
        {
            if (str[i]=='0' || str[i]=='2' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='8')
            {
                flag = true ;
                break ;
            }
        }
        if (flag)
        {
            cout << "NO\n" ;
            continue ;
        }
        sort (str.begin() , str.end()) ;
        do
        {
            int num=atoll(str.c_str()) ;
            if (s.find(num)==s.end())
            {
                flag = true ;
                break ;
            }
        }while (next_permutation(str.begin() , str.end())) ;
        if (flag)
        {
            cout << "NO\n" ;
            continue ;
        }
        else
        {
            cout << "YES\n" ;
        }
    }
    return 0;
}