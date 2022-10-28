#include <iostream>

using namespace std;

int main()
{
    int H , M ;
    cin >> H >> M ;
    if ( H==14 && M>=20 || H==15 || H==16 && M<=40 )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
