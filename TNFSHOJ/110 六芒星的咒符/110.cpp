#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , n , i , j , k ;
    cin >> n ;
    for (i=1 ; i<=n ; i=i+1)
    {
        cin >> N ;
        for(j=1 ; j<N ; j=j+1)
        {
            if (j==N-2)
            {
                for (k=1 ; k<=2*N-1 ; k=k+1)
                {
                    cout << "*" ;
                }
            }
            if (j==N-1)
            {
                cout << " " ;
                for (k=1 ; k<=2*N-3 ; k=k+1)
                {
                    cout << "*" ;
                }
            }
            if (j!=N-1 && j!=N-2)
            {
                for (k=1 ; k<=N-j ; k=k+1)
                {
                    cout << " " ;
                }
                for (k=1 ; k<=2*j-1 ; k=k+1)
                {
                    cout << "*" ;
                }
            }
            cout << endl ;
        }
        for (j=N-2 ; j>=1 ; j=j-1)
        {
            if (j==N-2)
            {
                for (k=1 ; k<=2*N-1 ; k=k+1)
                {
                    cout << "*" ;
                }
            }
            else
            {
                for (k=1 ; k<=N-j ; k=k+1)
                {
                    cout << " " ;
                }
                for (k=1 ; k<=2*j-1 ; k=k+1)
                {
                    cout << "*" ;
                }
            }
            cout << endl ;
        }
    }
    return 0;
}
