#include <iostream>

using namespace std;

int main()
{
    int length , width , i , j ;
    cin >> width >> length ;
    for (i=1 ; i<=length ; i=i+1)
    {
        for (j=1 ; j<=width ; j=j+1)
        {
            cout << "#" ;
        }
        cout << endl ;
    }
    return 0;
}
