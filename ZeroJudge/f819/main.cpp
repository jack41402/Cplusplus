#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int n , s , d , ans=0 ;
    vector<int> arr ;
    cin >> n ;
    while (n--)
    {
        cin >> s >> d ;
        if (d>100)
        {
            arr.emplace_back(s) ;
            ans += (d-100) * 5 ;
        }
    }
    sort(arr.begin() , arr.end()) ;
    for (auto i : arr) cout << i << ' ' ;
    cout << '\n' << ans << '\n' ;
    return 0;
}
