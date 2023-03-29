#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int arr[10] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , temp , ans=1e18 , l , r ;
    for (int &i : arr) cin >> i ;
    cin >> n ;
    vector<pair<long long int , long long int>> b ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        b.emplace_back(temp , i) ;
    }
    sort(b.begin() , b.end()) ;
    l=0 , r=0 ;
    set<long long int> s ;
    vector<long long int> c(n) ;
    c[b[0].second]++ ;
    s.emplace(b[0].second) ;
    while (l<b.size())
    {
        while (s.size()<n && r<b.size())
        {
            r++ ;
            if (r==b.size()) break ;
            c[b[r].second]++ ;
            s.emplace(b[r].second) ;
        }
        if (s.size()==n)
        {
            int
        }
    }
    return 0;
}
