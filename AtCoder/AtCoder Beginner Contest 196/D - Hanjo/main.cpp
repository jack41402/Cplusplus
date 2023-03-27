#include <iostream>

using namespace std;

int H , W , A , B , ans=0 ;
bool room[20][20]={false} ;

void dfs (int s , int x , int y , int a , int b)
{
    if (s==H*W)
    {
        ans++ ;
        return;
    }
    int nx=x+1 , ny=y ;
    if (x==W) nx = 1 , ny++ ;
    if (room[x][y]) return dfs(s+1 , nx , ny , a , b) ;
    if (a)
    {
        if (x!=W && !room[nx][ny])
        {
            room[x][y] = room[nx][ny] = true ;
            dfs(s+1 , nx , ny , a-1 , b) ;
            room[x][y] = room[nx][ny] = false ;
        }
        if (y<H)
        {
            room[x][y] = room[x][y+1] = true ;
            dfs(s+1 , nx , ny , a-1 , b) ;
            room[x][y] = room[x][y+1] = false ;
        }
    }
    if (b)
    {
        room[x][y] = true ;
        dfs(s+1 , nx , ny , a , b-1) ;
        room[x][y] = false ;
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> H >> W >> A >> B ;
    dfs(0 , 1 , 1 , A , B) ;
    cout << ans << '\n' ;
    return 0;
}
