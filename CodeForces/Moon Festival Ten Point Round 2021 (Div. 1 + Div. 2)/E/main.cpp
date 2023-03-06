#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , m , k , q , t , ai ;
    vector<long long int> arr ;
    cin >> n >> m >> k ;
    for (int i=0 ; i<m ; ++i)
    {
        cin >> ai ;
        arr.emplace_back(ai) ;
    }
    sort(arr.begin() , arr.end()) ;
    cin >> q ;
    while (q--)
    {
        cin >> t ;
        long long int position=lower_bound(arr.begin() , arr.end() , t)-arr.begin() ;
        cout << (m - position) % k << '\n' ;
    }
    return 0;
}