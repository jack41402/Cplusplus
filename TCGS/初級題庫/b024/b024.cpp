#include <iostream>

using namespace std;

int main()
{
    int N , i ;
    cin >> N ;
    long long int f[N] ;
    f[0] = 1 ;
    f[1] = 1 ;
    for (i=2 ; i<=N ; i=i+1)
    {
        f[i] = f[i-1] + f[i-2] ;
    }
    cout << f[i-1] << " " << f[f[i-1]%N] << endl ;
    return 0;
}
