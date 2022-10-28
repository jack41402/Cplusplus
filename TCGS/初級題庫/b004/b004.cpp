#include <iostream>

using namespace std;

int main()
{
    int N , M , m , a[20] , i , j , k ;
    cin >> N >> M ;
    for (i=0 , k=1; i<N ; i=i+1 , k=k+1)
    {
        a[i] = k ;
    }
    for (i=1 ; i<=M ; i=i+1)
    {
        cin >> m ;
        for (j=0 ; j<N ; j=j+1)
        {
            if (a[j]==m)
            {
                a[j] = 0 ;
            }
        }
    }
    for (i=0 ; i<N ; i=i+1)
    {
        if (a[i]!=0)
        {
            cout << a[i] << " " ;
        }
    }
    return 0;
}
