#include <iostream>

using namespace std;

int main()
{
    int N , M , ave , S , i ;
    S = 0 ;
    M = 0 ;
    cin >> N ;
    int a[N] ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
        S = S + a[i] ;
    }
    ave = S / N ;
    for (i=0 ; i<N ; i=i+1)
    {
        if (a[i]<ave)
        {
            M = M + ave - a[i] ;
        }
    }
    cout << M << endl ;
    return 0;
}
