#include <iostream>

using namespace std;

int main()
{
    int n , prime=2 , count ;
    bool flag=false ;
    cin >> n ;
    while (n!=1)
    {
        count = 0 ;
        while (n%prime==0)
        {
            if (count==0) cout << prime ;
            n /= prime ;
            count++ ;
        }
        if (count>1) cout << '^' << count ;
        if (n!=1 && count!=0) cout << " * " ;
        prime++ ;
    }
    cout << '\n' ;
    return 0;
}
