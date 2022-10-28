#include <iostream>

using namespace std;

int main()
{
    int N , i , S , k ;
    S = 0 ;
    cin >> N ;
    int a[N] ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
    }
    S = a[0] - 1 ;
    for (i=1 ; i<N-1 ; i=i+1)
    {
        k = a[i] - a[i+1] ;
        if (k>=0)
        {
            S = S + k ;
        }
        else if (k<0)
        {
            S = S - k ;
        }
    }
    cout << S << endl ;
    return 0;
}
