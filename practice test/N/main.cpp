#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    if (n>=60 && n<70)
    {
        cout << "Drink No\nCookie No\nStationery No\nWater Yes\n" ;
    }
    if (n>=70 && n<80)
    {
        cout << "Drink No\nCookie No\nStationery Yes\nWater Yes\n" ;
    }
    if (n>=80 && n<90)
    {
        cout << "Drink No\nCookie Yes\nStationery Yes\nWater Yes\n" ;
    }
    if (n>=90)
    {
        cout << "Drink Yes\nCookie Yes\nStationery Yes\nWater Yes\n" ;
    }
    if (n<60)
    {
        cout << "Drink No\nCookie No\nStationery No\nWater No\n" ;
    }
    return 0;
}
