#include <iostream>
#include <algorithm>
#include <iomanip>
#define endl"\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , i ;
    cin >> N ;
    double arr[N] ;
    for (i=0 ; i<N ; ++i)
    {
        cin >> arr[i] ;
        sort (arr , arr+i+1) ;
        if ((i+1)%2!=0)
        {
            cout << fixed << setprecision(6) << arr[i/2] << endl ;
        }
        if ((i+1)%2==0)
        {
            cout << fixed << setprecision(6) << (arr[i/2] + arr[i/2+1]) / 2 << endl ;
        }
    }
    return 0;
}
