#include <iostream>

using namespace std;

int main()
{
    int x , y , i , j ;
    cin >> x >> y ;
    long long int graph[x+1][y+1] ;
    for (i=0 ; i<x+1 ; i++)
    {
        graph[i][0] = 1 ;
    }
    for (i=0 ; i<y+1 ; i++)
    {
        graph[0][i] = 1 ;
    }
    for (i=1 ; i<x+1 ; ++i)
    {
        for (j=1 ; j<y+1 ; ++j)
        {
            graph[i][j] = graph[i-1][j] + graph[i][j-1] ;
        }
    }
    cout << graph[x][y] << endl ;
    return 0;
}
