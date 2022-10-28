#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t , N , i , j , k ;
    vector<pair<int, int>> arr ;
    cin >> t ;
    for (i=1 ; i<=t ; ++i)
    {
        cin >> N ;
        arr.clear() ;
        for (j=1 ; j<=N ; ++j)
        {
            int x , y ;
            cin >> x >> y ;
            arr.emplace_back(x, y) ;
        }
        sort (arr.begin() , arr.end()) ;
        int a=0 ;
        bool c=false ;
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
        string ans="" ;
        int x=0 , y=0 ;
        for (j=0 ; j<N ; ++j)
        {
            for (k=0 ; k<arr[j].first-x ; ++k)
            {
                ans += 'R' ;
            }
            for (k=0 ; k<arr[j].second-y ; ++k)
            {
                ans += 'U' ;
            }
            x = arr[j].first ;
            y = arr[j].second ;
        }
        cout << ans << endl ;
    }
    return 0;
}