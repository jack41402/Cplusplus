#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i , j ;
    long long int N , M , ans , c , d ;
    vector<long long int> C(100) ;
    C[0] = 1 ;
    while (true)
    {
        cin >> N >> M ;
        if (N==0 && M==0)
        {
            break ;
        }
        c = max (M , N-M) ;
        d = min (M , N-M) ;
        for (i=c+1 , ans=1 , j=1 ; i<=N ; i++)
        {
            ans *= i ;
            if (j<=d)
            {
                ans /= j ;
                j++ ;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}
