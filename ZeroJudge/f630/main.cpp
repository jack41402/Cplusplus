#include <iostream>
#include <bitset>

using namespace std;

bitset<2505> list[2505] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , d , f , ans=0 ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> d ;
        for (int j=0 ; j<d ; ++j)
        {
            cin >> f ;
            list[i][f] = true ;
        }
    }
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=i+1 ; j<n ; ++j)
        {
            if ((list[i]&list[j]).any()) ans++ ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}
