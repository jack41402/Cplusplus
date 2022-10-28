#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , a[100][6] , b[100][2], S[100]={0} , i , j , l , output ;
    bool c[100]={0} ;
    cin >> N ;
    for (i=0 ; i<N ; i=i+1)
    {
        for (j=0 ; j<6 ; j=j+1)
        {
            cin >> a[i][j] ;
            if (j!=0)
            {
                S[i] = S[i] + a[i][j] ;
            }
        }
    }
    for (i=0 ; i<N ; i=i+1)
    {
        for (j=0 , output=0 , l=0 ; j<N ; j=j+1)
        {
            if (S[j]>output && c[j]==0)
            {
                 l = j ;
            }
        }
        c[l] = 1 ;
        b[i][0] = l+1 ;
        b[i][1] = S[l] ;
        cout << b[i][0] << " " << b[i][1] << endl ;
    }
    return 0;
}
