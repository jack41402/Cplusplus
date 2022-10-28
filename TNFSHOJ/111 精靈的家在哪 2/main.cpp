#include <iostream>

using namespace std;

int main()
{
    int S , x , y ;
    S = 2 ;
    cin >> x >> y ;
    while (S%x!=0)
    {
        S = S * 2 + 1 ;
    }
    if (S%y==0)
    {
        cout << "right" << endl ;
    }
    else
    {
        cout << "left" << endl ;
    }
    return 0;
}
