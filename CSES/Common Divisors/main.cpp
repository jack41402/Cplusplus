#include <iostream>
#include <algorithm>

using namespace std;

int appear[1000005]={0} ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , temp , div ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        appear[temp]++ ;
    }
    for (int i=1e6 ; i>0 ; --i)
    {
        div = 0 ;
        for (int j=i ; j<=1e6 ; j+=i) div += appear[j] ;
        if (div>=2)
        {
            cout << i << '\n' ;
            break ;
        }
    }
    return 0;
}
