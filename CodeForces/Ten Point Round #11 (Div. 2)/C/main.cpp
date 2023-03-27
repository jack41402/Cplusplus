#include <iostream>

using namespace std;

int dice[1000005]={0} ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q , n ;
    for (int i=1 ; i<=100 ; ++i)
    {
        for (int j=1 ; j<=100 ; ++j)
        {
            for (int k=1 ; k<=100 ; ++k)
            {
                dice[i+j+k]++ ;
                dice[i+j*k]++ ;
                dice[i*j+k]++ ;
                dice[i*j*k]++ ;
            }
        }
    }
    cin >> q ;
    while(q--)
    {
        cin >> n ;
        cout << dice[n] << '\n' ;
    }
    return 0;
}
