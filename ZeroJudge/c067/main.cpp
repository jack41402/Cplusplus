#include <iostream>

using namespace std;

int arr[55] ;

int main()
{
    int n , count=1 ;
    while (cin>>n)
    {
        if (n==0) break ;
        int avg=0 , ans=0 ;
        for (int i=0 ; i<n ; ++i)
        {
            cin >> arr[i] ;
            avg += arr[i] ;
        }
        avg /= n ;
        for (int i=0 ; i<n ; ++i)
        {
            if (arr[i]>avg) ans += arr[i]-avg ;
        }
        cout << "Set #" << count << "\nThe minimum number of moves is " << ans << ".\n" ;
        count++ ;
    }
    return 0;
}
