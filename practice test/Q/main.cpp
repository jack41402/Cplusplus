#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , temp ;
    vector<int> arr ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        arr.emplace_back(temp) ;
    }
    for (int i=n-1 ; i>=0 ; --i) cout << arr[i] << ' ' ;
    return 0;
}
