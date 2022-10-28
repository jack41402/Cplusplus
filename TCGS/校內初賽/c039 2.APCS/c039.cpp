#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b ;
    if (a>=90 && a<=100)
    {
        if (b>=350 && b<=400)
        {
            cout << "5 5" << endl ;
        }
        else if (b>=250 && b<=349)
        {
            cout << "5 4" << endl ;
        }
        else if (b>=150 && b<=249)
        {
            cout << "5 3" << endl ;
        }
        else if (b>=50 && b<=149)
        {
            cout << "5 2" << endl ;
        }
        else
        {
            cout << "5 1" << endl ;
        }
    }
    else if (a>=70 && a<=89)
    {
        if (b>=350 && b<=400)
        {
            cout << "4 5" << endl ;
        }
        else if (b>=250 && b<=349)
        {
            cout << "4 4" << endl ;
        }
        else if (b>=150 && b<=249)
        {
            cout << "4 3" << endl ;
        }
        else if (b>=50 && b<=149)
        {
            cout << "4 2" << endl ;
        }
        else
        {
            cout << "4 1" << endl ;
        }
    }
    else if (a>=50 && a<=69)
    {
        if (b>=350 && b<=400)
        {
            cout << "3 5" << endl ;
        }
        else if (b>=250 && b<=349)
        {
            cout << "3 4" << endl ;
        }
        else if (b>=150 && b<=249)
        {
            cout << "3 3" << endl ;
        }
        else if (b>=50 && b<=149)
        {
            cout << "3 2" << endl ;
        }
        else
        {
            cout << "3 1" << endl ;
        }
    }
    else if (a>=30 && a<=49)
    {
        if (b>=350 && b<=400)
        {
            cout << "2 5" << endl ;
        }
        else if (b>=250 && b<=349)
        {
            cout << "2 4" << endl ;
        }
        else if (b>=150 && b<=249)
        {
            cout << "2 3" << endl ;
        }
        else if (b>=50 && b<=149)
        {
            cout << "2 2" << endl ;
        }
        else
        {
            cout << "2 1" << endl ;
        }
    }
    else
    {
        if (b>=350 && b<=400)
        {
            cout << "1 5" << endl ;
        }
        else if (b>=250 && b<=349)
        {
            cout << "1 4" << endl ;
        }
        else if (b>=150 && b<=249)
        {
            cout << "1 3" << endl ;
        }
        else if (b>=50 && b<=149)
        {
            cout << "1 2" << endl ;
        }
        else
        {
            cout << "1 1" << endl ;
        }
    }
    return 0;
}
