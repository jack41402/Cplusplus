#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , i ;
    cin >> N ;
    int arr[N] ;
    for (i=0 ; i<N ; i++)
    {
        cin >> arr[i] ;
    }
    sort (arr , arr+N) ;
    if (arr[0]!=arr[N-1])
    {
        cout << arr[N-1] << " " << arr[0] << endl ;
    }
    else
    {
        cout << "Same!" << endl ;
    }
    return 0;
}
