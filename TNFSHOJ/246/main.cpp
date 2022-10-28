#include <iostream>

using namespace std;

int main()
{
    unsigned long long int a , m , b , i , n ;
    char c ;
    cin >> a >> m >> b ;
    for (i=1 ; i<=m ; i++)
    {
        cin >> n >> c ;
        a *= n ;
        a %= b ;
    }
    cout << a << endl ;
    return 0;
}
