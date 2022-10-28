#include <iostream>

using namespace std;

int main()
{
    int N , i ;
    string a ;
    char c ;
    cin >> N >> a >> c ;
    if (c=='L')
    {
        for (i=0 ; i<N ; i=i+1)
        {
            if (a[i+1]=='P')
            {
                a[i] = 'P' ;
                a[i+1] = '.' ;
                break ;
            }
        }
    }
    else if (c=='R')
    {
        for (i=0 ; i<N ; i=i+1)
        {
            if (a[i]=='P')
            {
                a[i] = '.' ;
                a[i+1] = 'P' ;
                break ;
            }
        }
    }
    cout << a << endl ;
    return 0;
}
