#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int s , n , m ;
int mp[105][105] , visited[105][105] , x , y , dir_x , dir_y ;
// x 控制上下，y 控制左右
int move_x[4]={1 , 0 , 0 , -1} ;
int move_y[4]={0 , -1 , 1 , 0} ;
queue<pair<int , int>> q ;

void bfs ()
{
    while (!q.empty())
    {
        x = q.front().first ;
        y = q.front().second ;
        q.pop() ;
        for (int i=0 ; i<5-s ; ++i)
        {
            dir_x = x + move_x[i] ;
            dir_y = y + move_y[i] ;
            if (dir_x<0 || dir_x>=n || dir_y<0 || dir_y>=m) continue ;
            if (mp[dir_x][dir_y]==1 && visited[dir_x][dir_y]==0)
            {
                q.emplace(dir_x , dir_y) ;
                visited[dir_x][dir_y] = visited[x][y] + 1 ;
            }
        }
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int source , count=1 ;
    while (cin>>s)
    {
        cin >> n >> m ;
        memset(visited , 0 , sizeof(visited)) ;
        for (int i=0 ; i<n ; ++i)
        {
            for (int j=0 ; j<m ; ++j)
            {
                cin >> mp[i][j] ;
                if (i==0 && mp[i][j]==1) source = j ;
            }
        }
        q.emplace(0 , source) ;
        visited[0][source] = 1 ;
        bfs() ;
        cout << "Case " << count++ << ":\n" ;
        for (int i=0 ; i<n ; ++i)
        {
            for (int j=0 ; j<m ; ++j)
            {
                cout << visited[i][j] << ' ' ;
            }
            cout << '\n' ;
        }
    }
    return 0;
}
