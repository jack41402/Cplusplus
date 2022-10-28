#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unsigned long long int i , j , h , w , ans=0 ;
    cin >> h >> w ;
    h-- ;
    w-- ;
    vector <int> row(w+1 , 0) ;
    vector<vector<int> > square ;
    square.assign(h+1 , row) ;
    for (i=1 ; i<h+1 ; ++i)
    {
        for (j=1 ; j<w+1 ; ++j)
        {
            square[i][j] = min(min(square[i-1][j] , square[i][j-1]) , square[i-1][j-1]) + 1 ;
        }
    }
    for (i=1 ; i<h+1 ; ++i)
    {
        for (j=1 ; j<w+1 ; ++j)
        {
            for (int k=1 ; k<=square[i][j] ; ++k) ans+=k*k ;
            if (square[i][j]>=2)
            {
                ans += (square[i][j]-1)*(square[i][j]-1)*2 ;
            }
        }
    }
    cout << ans << endl ;
    return 0;
}