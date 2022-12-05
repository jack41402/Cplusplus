#include <iostream>
#include <cstring>

using namespace std;

int alpha[200] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    string str ;
    cin >> n ;
    cin.ignore() ;
    while (n--)
    {
        int max=0 ;
        memset (alpha , 0 , sizeof (alpha)) ;
        cout << endl ;
        getline(cin , str) ;
        for (char i : str)
        {
            if (!isalpha (i)) continue ;
            alpha[tolower(i)]++ ;
            if (alpha[tolower(i)]>max) max = alpha[tolower(i)] ;
        }
        for (int i=0 ; i<200 ; ++i)
        {
            if (alpha[i]==max) cout << (char) i ;
        }
        cout << '\n' ;
    }
    return 0;
}
