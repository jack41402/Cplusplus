#include <iostream>

using namespace std;

int main()
{
    int N , i , j ;
    cin >> N ;
    i = N/5 + N%5 ;
    j = 0 ;
    while (i!=0)
    {
        i = i/5 ;
        j = j + i ;
    }
    N = N + N/5 + j ;
    cout << N << endl;
    return 0;
}
