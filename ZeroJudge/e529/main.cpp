#include <iostream>
#include <sstream>

using namespace std;

int p[1000] ;
string str[1000] ;

int main ()
{
    ios::sync_with_stdio (false);
    cin.tie(nullptr);
    int t , n ;
    string temp ;
    stringstream ss ;
    cin >> t ;
    while (t--)
    {
        cin.ignore() ;
        cin.ignore() ;
        getline (cin , temp) ;
        ss.str("") ;
        ss.clear() ;
        ss << temp ;
        n = 0 ;
        while (ss >> p[n]) n++ ;
        for (int i=0 ; i<n ; ++i)
        {
            cin >> str[p[i]] ;
        }
        for (int i=1 ; i<=n ; ++i)
        {
            cout << str[i] << '\n' ;
        }
    }
    return 0;
}
