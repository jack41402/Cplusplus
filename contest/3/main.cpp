#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b ;
    if (a>=90) cout << "5 " ;
    else if (a>=70) cout << "4 " ;
    else if (a>=50) cout << "3 " ;
    else if (a>=30) cout << "2 " ;
    else cout << "1 " ;
    if (a>=350) cout << "5\n" ;
    else if (a>=250) cout << "4\n" ;
    else if (a>=150) cout << "3\n" ;
    else if (a>=50) cout << "2\n" ;
    else cout << "1\n" ;
    return 0;
}
