#include <iostream>

using namespace std;

int main()
{
    int N , n , i , j , k , c=0 , temp=0 ;
    cin >> N ;
    for (i=1 ; i<=N ; i++)
    {
        cin >> n ;
        int a[n] , b[n] ;
        for (j=0 ; j<n ; j++)
        {
            cin >> a[j] ;
        }
        for (j=0 ; j<n ; j++)
        {
            cin >> b[j] ;
        }
        for (j=0 , c=0 ; j<n ; j++)
        {
            if (b[j]>a[j])
            {
                k = b[j] - a[j] ;
                temp = j ;
                break ;
            }
        }
        for (j=0 , c=0 ; j<n ; j++)
        {
            if (a[j]>b[j])
            {
                c = -1 ;
                break ;
            }
            else if (b[j]>a[j])
            {
                if (a[j]+k==b[j] && j-temp==c)
                {
                    c++ ;
                }
                else
                {
                    c = -1 ;
                    break ;
                }
            }
        }
        if (c>=0)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
    return 0;
}
