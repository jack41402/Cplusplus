#include <iostream>

using namespace std;

int main()
{
    int m , n , ans ;
    while (true)
    {
        cin >> m >> n;
        if (m==-1 && n==-1)
        {
            break ;
        }
        ans = min((n-m+100) % 100 , ((m-n+100) % 100)) ;
        cout << ans << endl;
    }
    return 0;
}
