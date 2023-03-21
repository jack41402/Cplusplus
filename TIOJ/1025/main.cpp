#include <iostream>

using namespace std;

int sudoku[10][10]={0} , count=0 ;
bool row[10][10]={false} , column[10][10]={false} , block[10][10]={false} ;

void dfs (int x , int y)
{
    if (x==9)
    {
        ::count++ ;
        for (int i=0 ; i<9 ; ++i)
        {
            for (int j=0 ; j<9 ; ++j)
            {
                cout << sudoku[i][j] << ' ' ;
            }
            cout << '\n' ;
        }
        cout << '\n' ;
    }
    if (sudoku[x][y])
    {
        if (y==8) dfs(x+1 , 0) ;
        else dfs(x , y+1) ;
        return;
    }
    for (int num=1 ; num<=9 ; ++num)
    {
        if (!row[x][num] && !column[y][num] && !block[x/3*3+y/3][num])
        {
            row[x][num] = true ;
            column[y][num] = true ;
            block[x/3*3+y/3][num] = true ;
            sudoku[x][y] = num ;
            (y==8) ? dfs(x+1 , 0) : dfs(x , y+1) ;
            row[x][num] = false ;
            column[y][num] = false ;
            block[x/3*3+y/3][num] = false ;
            sudoku[x][y] = 0 ;
        }
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i=0 ; i<9 ; ++i)
    {
        for (int j=0 ; j<9 ; ++j)
        {
            cin >> sudoku[i][j] ;
            if (sudoku[i][j])
            {
                row[i][sudoku[i][j]] = true ;
                column[j][sudoku[i][j]] = true ;
                block[i/3*3+j/3][sudoku[i][j]] = true ;
            }
        }
    }
    dfs(0 , 0) ;
    cout << "there are a total of " << ::count << " solution(s).\n" ;
    return 0;
}
