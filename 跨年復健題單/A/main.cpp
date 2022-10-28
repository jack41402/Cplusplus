#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N , a , b , c , i ;
    cin >> N ;
    for (i=1 ; i<=N ; i++)
    {
        cin >> a >> b >> c ;
        cout << max(abs(a-b)+abs(a-c)+abs(b-c)-4 , 0) << endl ;
    }
    return 0;
}
