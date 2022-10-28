#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t , n , i , x , y , s ;
    vector<int> arr(3) ;
    cin >> t ;
    for (i=1 ; i<=t ; ++i)
    {
        cin >> arr[0] >> arr[1] >> arr[2] >> n ;
        sort (arr.begin() , arr.end()) ;
        x = arr[2] - arr[1] ;
        y = arr[2] - arr[0] ;
        s = x + y ;
        if ((n-s)<0)
        {
            cout << "NO" << endl ;
        }
        else if (s<=n && (n-s)%3==0)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
    return 0;
}
