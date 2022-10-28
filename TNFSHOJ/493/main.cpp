#include <iostream>

using namespace std;

int arr[3000][3000] ;

int main()
{
    int i , j , n , k , theta , temp;
    bool c ;
    cin >> n >> k >> theta ;
    if (theta==0 || theta==360)
    {
        for (i=0 ; i<n ; ++i)
        {
            for (j=0 ; j<k ; ++j)
            {
                cin >> temp ;
                arr[i][j] = temp ;
            }
        }
        c = 1 ;
    }
    else if (theta==90)
    {
        for (i=n-1 ; i>=0 ; --i)
        {
            for (j=0 ; j<k ; ++j)
            {
                cin >> temp ;
                arr[j][i] = temp ;
            }
        }
        c = 0 ;
    }
    else if (theta==180)
    {
        for (i=n-1 ; i>=0 ; --i)
        {
            for (j=0 ; j<k ; ++j)
            {
                cin >> temp ;
                arr[i][j] = temp ;
            }
        }
        c = 1 ;
    }
    else
    {
        for (i=0 ; i<n ; ++i)
        {
            for (j=0 ; j<k ; ++j)
            {
                cin >> temp ;
                arr[j][i] = temp ;
            }
        }
        c = 0 ;
    }
    if (c==0)
    {
        for (i=0 ; i<k ; ++i)
        {
            for (j=0 ; j<n ; ++j)
            {
                cout << arr[i][j] << " " ;
            }
            cout << endl ;
        }
    }
    else
    {
        for (i=0 ; i<n ; ++i)
        {
            for (j=0 ; j<k ; ++j)
            {
                cout << arr[i][j] << " " ;
            }
            cout << endl ;
        }
    }
    return 0;
}
