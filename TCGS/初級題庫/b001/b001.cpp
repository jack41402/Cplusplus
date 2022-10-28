#include <iostream>

using namespace std;

int main()
{
    int N , a[10] , i ;
    cin >> N ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
    }
    for (i=N-1 ; i>=0 ; i=i-1)
    {
        cout << a[i] << " " ;
    }
    return 0;
}
