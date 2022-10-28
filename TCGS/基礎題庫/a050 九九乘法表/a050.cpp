#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N , i , j ;
    cin >> N ;
    for (i=1 ; i<=N ; i=i+1)
    {
        for (j=1 ; j<=N ; j=j+1)
        {
            cout << j << "x" << i << "=" << setw(2) << i*j << "  " ;
        }
        cout << endl ;
    }
    return 0;
}
