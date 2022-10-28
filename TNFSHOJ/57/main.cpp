#include <iostream>

using namespace std;

int main()
{
    int n , m , k , i , temp ;
    unsigned long long int ans ;
    while (cin >> n >> m >> k)
    {
        if (n>m)
        {
            swap(n , m) ;
        }
        if (k==2)
        {
            cout << 2 << endl ;
        }
        else if (k<=1)
        {
            cout << 0 << endl ;
        }
        else
        {
            if (n==1)
            {
                ans = k ;
                temp = k-1 ;
                for (i=1 ; i<m ; ++i)
                {
                    ans = ans * temp % 433494437 ;
                }
            }
            else if (n==2)
            {
                ans = k * (k-1) ;
                temp = (k-1) + (k-2)*(k-2) ;
                for (i=1 ; i<m ; ++i)
                {
                    ans = ans * temp % 433494437 ;
                }
            }
            else if (n==3)
            {
                ans =  k*(k-1)*(k-1) ;
                temp = (k-1)*(k-2) + (k-2)*(k-2)*(k-2) ;
                for (i=1 ; i<m ; ++i)
                {
                    ans = ans * temp % 433494437 ;
                }
            }
            else if (n==4)
            {
                ans = k*(k-1)*(k-1)*(k-1) ;
                temp = (k-1)*(k-2)*(k-2) + (k-2)*(k-2)*(k-2)*(k-2) ;
                for (i=1 ; i<m ; ++i)
                {
                    ans = ans * temp % 433494437 ;
                }
            }
            cout << ans << endl ;
        }
    }
    return 0;
}
