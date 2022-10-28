#include <iostream>

using namespace std;

int main()
{
    int N , i , j ;
    cin >> N ;
    for (i=1 ; i<=N ; i=i+1)
    {
        for (j=1 ; j<=i ; j=j+1)
        {
            cout << i ;
        }
        cout << endl ;
    }
    return 0;
}
