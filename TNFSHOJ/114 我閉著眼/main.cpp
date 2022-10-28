#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[6][5] , x , y ;
    bool i ;
    i = 0 ;
    for (y=0 ; y<5 ; y=y+1)
    {
        for(x=0 ; x<6 ; x=x+1)
        {
            cin >> a[x][y] ;
        }
    }
    for (y=0 ; y<5 && i==0; y=y+1)
    {
        for(x=0 ; x<4 ; x=x+1)
        {
            if (a[x][y]==a[x+1][y] && a[x][y]==a[x+2][y])
            {
                cout << "Yes" << endl ;
                i = 1 ;
                break ;
            }
        }
    }
    for (y=0 ; y<3 && i==0; y=y+1)
    {
        for(x=0 ; x<6 ; x=x+1)
        {
            if (a[x][y]==a[x][y+1] && a[x][y]==a[x][y+2])
            {
                cout << "Yes" << endl ;
                i = 1 ;
                break ;
            }
        }
    }
    if (i==0)
    {
        cout << "No" << endl ;
    }
    return 0;
}
