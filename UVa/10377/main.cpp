#include <iostream>

using namespace std;

const int NORTH = 0;
const int EAST = 1;
const int SOUTH = 2;
const int WEST = 3;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string map[65] ;
    int n ;
    cin >> n ;
    while (n--)
    {
        int a , b ;
        char ch ;
        cin >> a >> b ;
        int direction=NORTH ;
        int x , y ;
        for (int i=0 ; i<a ; ++i)
        {
            cin.ignore() ;
            getline(cin , map[i]) ;
        }
        cin >> x >> y ;
        //x-- , y-- ;
        while (cin>>ch)
        {
            if (ch=='Q')
            {
                cout << x+1 << ' ' << y+1 ;
                if (direction==NORTH) cout << " N\n" ;
                else if (direction==EAST) cout << " E\n" ;
                else if (direction==SOUTH) cout << " S\n" ;
                else if (direction==WEST) cout << " W\n" ;
                break ;
            }
            else if (ch=='R') direction = (direction + 1)%4 ;
            else if (ch=='L') direction = (direction + 3)%4 ;
            else if (ch=='F')
            {
                if (direction==NORTH && map[x-1][y]==' ' && x-1>=0) x-- ;
                else if (direction==EAST && map[x][y+1]==' ' && y+1<b) y++ ;
                else if (direction==SOUTH && map[x+1][y]==' ' && x+1<a) x++ ;
                else if (direction==WEST && map[x][y-1]==' ' && y-1>=0) y-- ;
            }
            else continue ;
        }
    }
    return 0;
}