#include <iostream>
#include <cmath>

using namespace std;

char cypher[100][100] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t ;
    string str ;
    cin >> t ;
    cin.ignore() ;
    while (t--)
    {
        getline (cin , str) ;
        double length=sqrt(str.size()) ;
        if (length- floor(length)!=0)
        {
            cout << "INVALID\n" ;
            continue ;
        }
        for (int i=0 , count=0 ; i<length ; ++i)
        {
            for (int j=0 ; j<length ; ++j)
            {
                cypher[i][j] = str[count] ;
                count++ ;
            }
        }
        for (int i=0 , count=0 ; i<length ; ++i)
        {
            for (int j=0 ; j<length ; ++j)
            {
                cout << cypher[j][i] ;
            }
        }
        cout << '\n' ;
    }
    return 0;
}
