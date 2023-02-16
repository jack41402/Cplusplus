#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , M , i , temp , ans ;
    vector<int>::iterator it1 ;
    vector<int>::iterator it2 ;
    cin >> N ;
    vector<int> song(N) ;
    for (i=0 ; i<N ; ++i)
    {
        cin >> temp ;
        song[i] = temp ;
    }
    sort (song.begin() , song.end()) ;
    cin >> M ;
    for (i=1 ; i<=M ; ++i)
    {
        cin >> temp ;
        it1 = lower_bound(song.begin() , song.end() , temp) ;
        it2 = upper_bound(song.begin() , song.end() , temp) ;
        ans = it2 - it1 ;
        cout << ans << endl ;
    }
    return 0;
}
