#include <iostream>

using namespace std;

int main()
{
    int N , M , i , j , temp ;
    cin >> N >> M ;
    int origin[N][M] , change[N][M] , row[N]={0} , comlumn[M]={0} , real[N][M]={0} ;
    for (i=0 ; i<N ; i++)
    {
        for (j=0 ; j<M ; j++)
        {
            cin >> origin[i][j] ;
        }
    }
    for (i=0 ; i<N ; i++)
    {
        for (j=0 ; j<M ; j++)
        {
            cin >> change[i][j] ;
            row[i] += change[i][j] ;
            comlumn[j] += change[i][j] ;
        }
    }
    for (i=0 ; i<N ; i++)
    {
        for (j=0 ; j<M ; j++)
        {
            if (change[i][j]==1)
            {
                temp = row[i] + comlumn[j] - 1 ;
                if (temp%2==1)
                {
                    if (origin[i][j]==1)
                    {
                        real[i][j] = 0 ;
                    }
                    else
                    {
                        real[i][j] = 1 ;
                    }
                }
                else
                {
                    real[i][j] = origin[i][j] ;
                }
            }
            else
            {
                temp = row[i] + comlumn[j] ;
                if (temp%2==1)
                {
                    if (origin[i][j]==1)
                    {
                        real[i][j] = 0 ;
                    }
                    else
                    {
                        real[i][j] = 1 ;
                    }
                }
                else
                {
                    real[i][j] = origin[i][j] ;
                }
            }
        }
    }
    for (i=0 ; i<N ; i++)
    {
        for (j=0 ; j<M ; j++)
        {
            cout << real[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0;
}
