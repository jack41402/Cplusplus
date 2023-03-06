#include <iostream>
#include <vector>

using namespace std;

vector<long long int> prime ;
bool not_prime[100000]={false} ;

void find()
{
    prime.emplace_back(2) ;
    for (long long int i=3 ; i<=100000 ; i+=2)
    {
        if (!not_prime[i])
        {
            prime.emplace_back(i) ;
            cout << i << endl ;
            for (long long int j=2*i ; j<=100000 ; j+=i+i)
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
    find() ;
    cin >> t ;
    return 0;
}