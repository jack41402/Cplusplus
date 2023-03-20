#include <iostream>
#include <vector>

using namespace std;

bool side[10][10]={false} ;
bool visited[10][10]={false} ;
vector<int> ans(9) ;

void dfs (int point , int index)
{
    if (index==9)
    {
        for (auto i :ans) cout << i ;
        cout << '\n' ;
        return;
    }
    for (int i=1 ; i<=5 ; ++i)
    {
        if (side[point][i])
        {
            if (visited[point][i] || visited[i][point]) continue ;
            ans[index] = i ;
            visited[point][i] = true ;
            visited[i][point] = true ;
            dfs(i , index+1) ;
            visited[point][i] = false ;
            visited[i][point] = false ;
        }
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    side[1][2] = true , side[1][3] = true , side[1][5] = true ;
    side[2][1] = true , side[2][3] = true , side[2][5] = true ;
    side[3][1] = true , side[3][2] = true , side[3][4] = true , side[3][5] = true ;
    side[4][3] = true , side[4][5] = true ;
    side[5][1] = true , side[5][2] = true , side[5][3] = true , side[5][4] = true ;
    ans[0] = 1 ;
    dfs(1 , 1) ;
    return 0;
}
