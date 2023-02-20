#include <iostream>
#include <set>

using namespace std;

int place[200005] ;

int main ()
{
    ios::sync_with_stdio (false);
    cin.tie(nullptr);
    int n , length , temp , x , r , l ;
    long long int ans=0 ;
    set <int> cut ;
    cin >> n >> length ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> x >> temp ;
        place[temp] = x ;
    }
    cut.emplace(0) , cut.emplace(length) ;
    auto ptr=cut.find(0) ;
    for (int i=1 ; i<=n ; ++i)
    {
        cut.emplace(place[i]) ;
//        ptr = cut.find(place[i]) ;
//        ptr++ ;
//        r = *ptr ;
        r = *next (cut.find(place[i]) , 1) ;
//        ptr-- , ptr-- ;
//        l = *ptr ;
        l = *prev (cut.find(place[i]) , 1) ;
        ans += r - l ;
    }
    cout << ans << '\n' ;
    return 0;
}