#include <iostream>

using namespace std;

int three[1005]={0} ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t , k , cnt=1 ;
    for (int i=1 ; i<3000 ; ++i)
    {
        if (i%3==0 || i%10==3) continue ;
        three[cnt++] = i ;
    }
    cin >> t ;
    while (t--)
    {
        cin >> k ;
        cout << three[k] << '\n' ;
    }
    return 0;
}
