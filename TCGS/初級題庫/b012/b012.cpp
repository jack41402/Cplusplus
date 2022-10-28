#include <iostream>

using namespace std;

int main()
{
    int i , S ;
    S = 0 ;
    string a ;
    cin >> a ;
    int k[a.size()] ;
    for (i=0 ; i<a.size() ; i=i+1)
    {
        if (a[i]=='I')
        {
            k[i] = 1 ;
        }
        else if (a[i]=='V')
        {
            k[i] = 5 ;
        }
        else if (a[i]=='X')
        {
            k[i] = 10 ;
        }
        else if (a[i]=='L')
        {
            k[i] = 50 ;
        }
        else if (a[i]=='C')
        {
            k[i] = 100 ;
        }
        else if (a[i]=='D')
        {
            k[i] = 500 ;
        }
        else if (a[i]=='M')
        {
            k[i] = 1000 ;
        }
    }
    for (i=0 ; i<a.size() ; i=i+1)
    {
        if (i+1==a.size())
        {
            S = S + k[i] ;
            break ;
        }
        else if (k[i]>=k[i+1])
        {
            S = S + k[i] ;
        }
        else if (k[i]<k[i+1])
        {
            S = S - k[i] ;
        }
    }
    cout << S << endl ;
    return 0;
}
