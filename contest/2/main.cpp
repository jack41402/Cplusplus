#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m , d , l , day ;
    cin >> m >> d >> l ;
    if (m==7) day = 60-d-l+1 ;
    if (m==8) day = 29-d-l+1 ;
    if (day>=0) cout << "YES\n" ;
    else cout << "NO\n" ;
    return 0;
}
