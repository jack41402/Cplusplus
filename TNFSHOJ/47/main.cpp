#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N , i , t , k ;
    vector<int>::iterator it1 ;
    vector<int>::iterator it2 ;
    cin >> N ;
    vector<int> arr(N) ;
    for (i=0 ; i<N ; ++i)
    {
        cin >> arr[i] ;
    }
    sort (arr.begin() , arr.end()) ;
    cin >> t ;
    for (i=1 ; i<=t ; ++i)
    {
        cin >> k ;
        it1 = lower_bound(arr.begin() , arr.end() , k) ;
        it2 = upper_bound(arr.begin() , arr.end() , k) ;
        if (k==*it1)
        {
            cout << k << endl ;
        }
        else if (it2==arr.end())
        {
            cout << arr[it1-arr.begin()-1] << " no" << endl ;
        }
        else if (*it1-1<arr[0])
        {
            cout << "no " << *it2 << endl ;
        }
        else
        {
            cout << arr[it1-arr.begin()-1] << " " << *it2 << endl ;
        }
    }
    return 0;
}