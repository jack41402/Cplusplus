#include <iostream>

using namespace std;

int main()
{
    int N , i , j , k ;
    cin >> N ;
    for (i=N , k=65+N-1 ; i>0 ; i=i-1 , k=k-1)
    {
        for (j=1 ; j<=N-i ; j=j+1)
        {
            cout << " " ;
        }
        for (j=1 ; j<=2*i-1 ; j=j+1)
        {
            cout << char(k) ;
        }
        cout << endl ;
    }
    return 0;
}
