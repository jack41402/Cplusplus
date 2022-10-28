#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N ;
    cin >> N ;
    int arr[N] , i ;
    for (i=0 ; i<N ; i++)
    {
        cin >> arr[i] ;
    }
    sort (arr , arr+N) ;
    cout << arr[N-2] - arr[1] << endl ;
    return 0;
}
