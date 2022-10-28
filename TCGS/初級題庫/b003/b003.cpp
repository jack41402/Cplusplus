#include <iostream>

using namespace std;

int main()
{
    int N , a[10] , M , i , s , b ;
    s = 0 ;
    b = 0 ;
    cin >> N ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
    }
    cin >> M ;
    for (i=0 ; i<N ; i=i+1)
    {
        if (a[i]>M)
        {
            b = b + 1 ;
        }
        if (a[i]<M)
        {
            s = s + 1 ;
        }
    }
    cout << b << " " << s << endl ;
    return 0;
}
