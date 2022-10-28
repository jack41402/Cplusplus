#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[3] ;
    for (int i=0 ; i<3 ; ++i) cin >> a[i] ;
    for (auto &i : a) if (i&1) i+=0x3f3f3f3f;
    sort(a, a+3);
    cout << ((a[1] > 0x3f3f3f3f)? a[1]-0x3f3f3f3f : a[1]) << "\n";
    return 0;
}