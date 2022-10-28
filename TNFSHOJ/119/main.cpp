#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , T , i , temp , a , b ;
    bool c=0 ;
    cin >> N ;
    int data[N] ;
    for (i=0 ; i<N ; i++)
    {
        cin >> data[i] ;
    }
    cin >> T ;
    for (i=1 ; i<=T ; i++)
    {
        cin >> a >> b ;
        if (abs(b-a)>8)
        {
            c = 1 ;
        }
        else if (c==0)
        {
            temp = data[a-1] ;
            data[a-1] = data[b-1] ;
            data[b-1] = temp ;
        }
    }
    if (c==0)
    {
        cout << "SORTED!" << endl ;
        for (i=0 ; i<N ; i++)
        {
            if (i==0)
            {
                cout << data[i] ;
            }
            else
            {
                cout << " " << data[i] ;
            }
        }
        cout << endl ;
    }
    else if (c==1)
    {
        cout << "I QUIT!" << endl ;
        for (i=0 ; i<N ; i++)
        {
            if (i==0)
            {
                cout << data[i] ;
            }
            else
            {
                cout << " " << data[i] ;
            }
        }
        cout << endl ;
    }
    return 0;
}
