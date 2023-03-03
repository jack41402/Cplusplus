#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int n , a , b ;
    vector<pair<int , int>> arr ;
    cin >> n ;
    while (n--)
    {
        cin >> a >> b ;
        arr.emplace_back(a , b) ;
    }
    sort(arr.begin() , arr.end()) ;
    for (auto i : arr)
    {
        cout << i.first << ' ' << i.second << '\n' ;
    }
    return 0;
}
