#include <iostream>

using namespace std;

int main()
{
    int N , i , j ;
    cin >> N ;
    for (i=1 ; i<=N ; i=i+1)
    {
        for (j=1 ; j<=N ; j=j+1)
        {
            if (i%3==j%3)
            {
                cout << "@" ;
            }
            else
            {
                cout << "-" ;
            }
        }
        cout << endl ;
    }
    return 0;
}
