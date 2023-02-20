#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 2147483650

using namespace std;

//bool button[MAX]={false} ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , q , k , p ;
    while (cin>>n>>q)
    {
        vector <int> arr ;
        long long int count=0 ;
        for (int i=0 ; i<n ; ++i)
        {
            cin >> k ;
            arr.emplace_back(k) ;
        }
        sort (arr.begin() , arr.end()) ;
        for (int i=0 ; i<q ; ++i)
        {
            cin >> p ;
            auto upper=upper_bound (arr.begin() , arr.end() , p) ;
            cout << (upper - arr.begin())&1 << '\n' ;
        }
    }
    return 0;
}
