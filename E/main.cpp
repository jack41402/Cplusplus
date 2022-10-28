#include <iostream>

using namespace std;

int N , M ;
int judge(string relation);
int main()
{
    int i , j ;
    cin >> N >> M ;
    string relation[N] ;
    return 0;
}
int ans[N]={0} ;
bool c[N]={0} ;
int judge(string relation)
{
    int i , j , temp , big=0 , line=0 ;
    if(N==1)
    {
        for (i=1 ; i<=N ; i++)
        {
            for (j=0 , temp=0 ; j<M ; j++)
            {
                if (relation[i][j]=='0')
                {
                    temp++ ;
                }
            }
            if (temp>big)
            {
                big = temp ;
                line = i ;
            }
        }
        cout << big << endl ;
        c[i] = 1 ;
        for (i=0 ; i<M ; i++)
        {
            ans[i] += relation[line][i]-'0' ;
        }
    }
    else if (N>1)
    {
        for (i=0 ; i<N ; i++)
        {

        }
    }
}
