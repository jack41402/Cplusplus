#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t , n , x , a , b ;
    cin >> t ;
    while (t--)
    {
        cin >> n >> x >> a >> b ;
        x = min(abs(a-b)+x , n-1) ;
        cout << x << endl ;
    }
    return 0;
}
