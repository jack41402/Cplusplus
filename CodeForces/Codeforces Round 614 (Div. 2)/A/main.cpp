#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int t , N , s , k , i , j , temp , m , n , ans ;
    cin >> t ;
    for (i=1 ; i<=t ; ++i)
    {
        cin >> N >> s >> k ;
        set<int> arr ;
        for (j=0 ; j<k ; ++j)
        {
            cin >> temp ;
            arr.insert(temp) ;
        }
        for (j=0 , m=s , n=s ; j<N ; ++j )
        {
            if (!arr.count(m) || !arr.count(n))
            {
                ans = j ;
                break ;
            }
            if (m<N)
            {
                ++m ;
            }
            if(n>1)
            {
                --n ;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}
