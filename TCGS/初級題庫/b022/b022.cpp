#include <iostream>

using namespace std;

int sum=0 , fab[11] , time[11] ;

int fab(int n)
{
    sum++ ;
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fab (n-1) + fab (n-2);
    }
}
int main()
{
    int n ;
    cin >> n ;
    cout << fab (n) << " " ;
    cout << sum << endl ;
    return 0;
}
