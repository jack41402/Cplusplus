#include <iostream>

using namespace std;

int main()
{
    int N , a[10] , i , S , j ;
    cin >> N ;
    S = 0 ;
    j = 0 ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
        if (a[i]>S)
        {
            S = a[i] ;
            j=i+1 ;
        }
    }
    cout << j << " " << S << endl ;
    return 0;
}
