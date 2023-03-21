#include <iostream>

using namespace std;

int ans=0 ;
string str ;
bool grid[10][10]={false} ;

void dfs (int x , int y , int index)
{
    if (x==0 && y==6 && index==48)
    {
        ans++ ;
        return;
    }
    // 要訪問的方格已經被走過了
    if (grid[x][y]) return;
    // 超出邊界
    if (x<0 || x>6 || y<0 || y>6) return;
    // 提前抵達終點
    if (x==0 && y==6 && index<48) return;
    // 抵達最上面，但左右都還沒走過
    if ((0<x && x<6) && y==0 && !grid[x-1][y] && !grid[x+1][y]) return;
    // 抵達最下面，但左右都還沒走過
    if ((0<x && x<6) && y==6 && !grid[x-1][y] && !grid[x+1][y]) return;
       // 抵達最左邊，但上下都還沒走過
    if (x==0 && (0<y && y<6) && !grid[x][y-1] && !grid[x][y+1]) return;
    // 抵達最右邊，但上下都還沒走過
    if (x==6 && (0<y && y<6) && !grid[x][y-1] && !grid[x][y+1]) return;
    // 上下都被走過，只能往左右走
    if ((0<x && x<6) && (0<y && y<6) && grid[x][y-1] && grid[x][y+1] && !grid[x-1][y] && !grid[x+1][y]) return;
    // 左右都被走過，只能往上下走
    if ((0<x && x<6) && (0<y && y<6) && !grid[x][y-1] && !grid[x][y+1] && grid[x-1][y] && grid[x+1][y]) return;
    grid[x][y] = true ;
    switch (str[index])
    {
        case 'D':
        {
            dfs (x , y+1 , index+1) ;
            break ;
        }
        case 'U':
        {
            dfs (x , y-1 , index+1) ;
            break ;
        }
        case 'L':
        {
            dfs (x-1 , y , index+1) ;
            break ;
        }
        case 'R':
        {
            dfs (x+1 , y , index+1) ;
            break ;
        }
        case '?':
        {
            dfs (x , y+1 , index+1) ;
            dfs (x , y-1 , index+1) ;
            dfs (x-1 , y , index+1) ;
            dfs (x+1 , y , index+1) ;
            break ;
        }
    }
    grid[x][y] = false ;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> str ;
    dfs (0 , 0 , 0) ;
    cout << ans << '\n' ;
    return 0;
}
