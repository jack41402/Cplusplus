#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T , N , a , i , j , k , layer ;
    char c ;
    cin >> T ;
    for (i=1 ; i<=T ; i=i+1)
    {
        cin >> c >> N ;
        if (c=='A')
        {
            for (layer=1 ; layer<=N ; layer=layer+1)
            {
                for (j=1 ; j<=N-layer ; j=j+1)
                {
                    cout << " " ;
                }
                for (j=1 ; j<=2*layer-1 ; j=j+1)
                {
                    cout << "*" ;
                }
                cout << endl;
            }
            cout << endl ;
        }
        else if (c=='B')
        {
            for (a=1 ; a<=2 ; a=a+1)
            {
                for (layer=1 ; layer<=N ; layer=layer+1)
                {
                    for (j=1 ; j<=N-layer ; j=j+1)
                    {
                        cout << " " ;
                    }
                    for (j=1 ; j<=2*layer-1 ; j=j+1)
                    {
                        cout << "*" ;
                    }
                    cout << endl ;
                }
            }
            cout << endl ;
        }
        else if (c=='C')
        {
            for (a=1 ; a<=N ; a=a+1)
            {
                for(layer=1 ; layer<=a ; layer=layer+1)
                {
                    for (j=1 ; j<=N-layer ; j=j+1)
                    {
                        cout << " " ;
                    }
                    for (j=1 ; j<=2*layer-1 ; j=j+1)
                    {
                        cout << "*" ;
                    }
                    cout << endl;
                }
            }
            cout << endl ;
        }
        else if (c=='D')
        {
            for (layer=1 ; layer<=10*N ; layer=layer+1)
            {
                for (j=1 ; j<=10*N-layer ; j=j+1)
                {
                    cout << " " ;
                }
                for (j=1 ; j<=2*layer-1 ; j=j+1)
                {
                    cout << "*" ;
                }
                cout << endl ;
            }
            cout << endl ;
        }
        else if (c=='E')
        {
            for (layer=1 ; layer<=N ; layer=layer+1)
            {
                for (j=1 ; j<=N-layer+2 ; j=j+1)
                {
                    cout << " " ;
                }
                for (j=1 ; j<=2*layer-1 ; j=j+1)
                {
                    cout << "*" ;
                }
                cout << endl;
            }
            for (k=1 ; layer=N && k<=2*N+3 ; k=k+1)
            {
                cout << "#" ;
                if (k==2*N+3)
                {
                    cout << endl ;
                }
            }
            cout << endl ;
        }
        else if (c=='F')
        {
            for (layer=1 ; layer<=2*N ; layer=layer+1)
            {
                for (j=1 ; j<=2*N-layer ; j=j+1)
                {
                    cout << " " ;
                }
                for (j=1 ; j<=2*layer-1 ; j=j+1)
                {
                    cout << "*" ;
                }
                cout << endl;
            }
            cout << endl ;
        }
        else if (c=='G')
        {
            for (layer=1 ; layer<=3*N ; layer=layer+1)
            {
                for (j=1 ; j<=3*N-layer ; j=j+1)
                {
                    cout << " " ;
                }
                for (j=1 ; j<=2*layer-1 ; j=j+1)
                {
                    cout << "*" ;
                }
                cout << endl;
            }
            cout << endl ;
        }
        else if (c=='H')
        {
            for (layer=1 ; layer<=7*N ; layer=layer+1)
            {
                for (j=1 ; j<=7*N-layer ; j=j+1)
                {
                    cout << " " ;
                }
                for (j=1 ; j<=2*layer-1 ; j=j+1)
                {
                    cout << "*" ;
                }
                cout << endl;
            }
            cout << endl ;
        }
        else if (c=='I')
        {
            for (layer=1 ; layer<=4*N-1 ; layer=layer+1)
            {
                for (j=1 ; j<=4*N-1-layer ; j=j+1)
                {
                    cout << " " ;
                }
                for (j=1 ; j<=2*layer-1 ; j=j+1)
                {
                    cout << "*" ;
                }
                cout << endl ;
            }
            cout << endl ;
        }
    }
    return 0;
}
