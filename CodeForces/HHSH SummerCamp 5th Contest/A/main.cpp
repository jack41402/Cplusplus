#include <iostream>

using namespace std;

char tray[1005][1005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m , k , locate , x , y ;
    string command ;
    char ch ;
    bool get=false ;
    cin >> n >> m ;
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=0 ; j<m ; ++j)
        {
            cin >> tray[i][j] ;
        }
    }
    cin >> k ;
    while (k--)
    {
        cin >> command ;
        if (command=="ptp")
        {
            cin >> ch >> locate ;
            x = locate/m ;
            y = locate%m-1 ;
        }
        if (command=="get" && tray[x][y]=='#')
        {
            get = true ;
            tray[x-1][y-1] = '-' , tray[x-1][y] = '-' , tray[x-1][y+1] = '-' ,
            tray[x][y-1] = '-' , tray[x][y] = '-' , tray[x][y+1] = '-' ,
            tray[x+1][y-1] = '-' , tray[x+1][y] = '-' , tray[x+1][y+1] = '-' ;
        }
        if (command=="put")
        {
            if (!get) cout << "put nothing\n" ;
            else if (tray[x-1][y-1]!='-' || tray[x-1][y]!='-' || tray[x-1][y+1]!='-' || tray[x][y-1]!='-' || tray[x][y]!='-' || tray[x][y+1]!='-' || tray[x+1][y-1]!='-' || tray[x+1][y]!='-' || tray[x+1][y+1]!='-')
            {
                cout << "collision\n" ;
            }
            else
            {
                get = false ;
                tray[x-1][y-1] = '*' , tray[x-1][y] = '*' , tray[x-1][y+1] = '*' ,
                tray[x][y-1] = '*' , tray[x][y] = '#' , tray[x][y+1] = '*' ,
                tray[x+1][y-1] = '*' , tray[x+1][y] = '*' , tray[x+1][y+1] = '*' ;
                cout << "put successful\n" ;
            }
        }
    }
    return 0;
}
