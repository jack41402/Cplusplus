#include <iostream>

using namespace std;

int main()
{
    int N , i , S ;
    S = 0 ;
    cin >> N ;
    int a[N] ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
    }
    for (i=0 ; i<N ; i=i+1)
    {
        if(a[i]>S)
        {
            S = a[i] ;
        }
    }
    cout << S << endl ;
    return 0;
}
