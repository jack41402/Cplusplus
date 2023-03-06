#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t , N , i , j , k , x , y , a ;
    string ans ;
    bool c ;
    vector<pair<int, int>> arr ;
    cin >> t ;
    for (i=1 ; i<=t ; ++i)
    {
        cin >> N ;
        for (j=1 ; j<=N ; ++j)
        {
            cin >> x >> y ;
            arr.emplace_back(x, y) ;
        }
        sort (arr.begin() , arr.end()) ;
        a = 0 , x = 0 , y = 0 ;
        c = false ;
        ans = "" ;
        for (j=0 ; j<N && c==false ; ++j)
        {
            if (arr[j].second<a)
            {
                c = true ;
            }
            a = arr[j].second ;
        }
        if (c==true)
        {
            cout << "NO" << endl ;
            continue ;
        }
        cout << "YES" << endl ;
        for (j=0 ; j<N ; ++j)
        {
            for (k=0 ; arr[i].first-x ; ++k)
            {
                ans += 'R' ;
            }
            for (k=0 ; arr[i].second-y ; ++k)
            {
                ans += 'U' ;
            }
            x = arr[i].first ;
            y = arr[i].second ;
        }
        cout << ans << endl ;
        arr.clear();
    }
    return 0;
}