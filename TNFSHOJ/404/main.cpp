#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N , i , j ;
    bool c=1 ;
    cin >> N ;
    vector<int> arr(N) ;
    for (i=0 ; i<N ; ++i)
    {
        cin >> arr[i] ;
    }
    sort (arr.begin() , arr.end()) ;
    for (i=0 , j=arr[0] ; i<N ; ++i , ++j)
    {
        if (j!=arr[i])
        {
            c = 0 ;
            cout << arr[0] << " " << arr[N-1] << " no" << endl ;
            break ;
        }
    }
    if (c==1)
    {
        cout << arr[0] << " " << arr[N-1] << " yes" << endl ;
    }
    return 0;
}
