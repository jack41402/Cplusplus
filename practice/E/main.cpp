#include <iostream>

using namespace std;

int main()
{
    long long int N , sum ;
    cin >> N ;
    long long int arr[N+1] , b[N] ;
    arr[0] = 0 ;
    for (int i=0 ; i<N ; ++i)
    {
        cin >> b[i] ;
    }
    arr[1] = b[0] ;
    arr[2] = b[1] ;
    sum = arr[1] ;
    for (int i=3 ; i<N+1 ; ++i)
    {
        arr[i] = b[i-1] - sum ;
        sum += arr[i-1] ;
    }
    cout << arr[1] ;
    for (int i=2 ; i<N+1 ; ++i)
    {
        cout << ' ' << arr[i] ;
    }
    return 0;
}
