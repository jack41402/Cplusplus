#include <iostream>

using namespace std;

int main()
{
    int i , a ;
    cin >> i ;
    while (i % 10 == 0)
    {
        i = i /  10 ;
    }
     while (i % 10 != 0)
    {
        a = i % 10 ;
        i = i / 10 ;
        cout << a ;
    }
    return 0;
}

