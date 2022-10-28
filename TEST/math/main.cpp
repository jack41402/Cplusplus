#include <iostream>

using namespace std;

int main()
{
    unsigned long long int sum=0 , power=1 , i ;
    for(i=1 ; i<18446744073709551615&&power<=2147483648 ; i+=2 , ++power)
    {
        sum += i ;
        if (sum==power*power) cout << "TRUE" << power << endl ;
        else cout << "FALSE" << endl ;
    }
    return 0;
}
