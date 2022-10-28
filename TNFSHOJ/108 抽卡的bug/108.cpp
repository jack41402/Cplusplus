#include <iostream>

using namespace std;

int main()
{
    int a , b , c , i , gash , card ;
    cin >> a >> b >> c ;
    for (i=1 ; i<=b ; i=i+1)
    {
        cin >> gash >> card ;
        a = a + gash * card ;
    }
    cout << (a-c)/4*5-(a-c) << endl ;
    return 0;
}
