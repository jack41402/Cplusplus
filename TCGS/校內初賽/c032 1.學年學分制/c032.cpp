#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b ;
    if (a>=60 && b>=60)
    {
        cout << "2" << endl ;
    }
    else if (a<60)
    {
        if(b>=60 && (a+b)/2>=60)
        {
            cout << 2 << endl ;
        }
        else if (b>=60 && (a+b)/2<60)
        {
            cout << 1 << endl ;
        }
        else if (b<60)
        {
            cout << 0 << endl ;
        }
    }
    else if (b<60)
    {
        if(a>=60 && (a+b)/2>=60)
        {
            cout << 2 << endl ;
        }
        else if (a>=60 && (a+b)/2<60)
        {
            cout << 1 << endl ;
        }
        else if (a<60)
        {
            cout << 0 << endl ;
        }
    }
    return 0;
}
