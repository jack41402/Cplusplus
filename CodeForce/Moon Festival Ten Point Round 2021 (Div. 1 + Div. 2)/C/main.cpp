#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t , n ;
    set<int> s{2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991} ;
    cin >> t ;
    while (t--)
    {
        cin >> n ;
        if (s.find(n)!=s.end()) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
    return 0;
}