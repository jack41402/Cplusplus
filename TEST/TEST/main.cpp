#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int n , m , t , ans=1e9 ;
int to_int[130] ;
char temp , to_c[63] ;


int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n ;
    for (int i=0 ; i<10 ; ++i)
    {
        to_int['0'+i] = i ;
        to_c[i] = '0'+i ;
        cout << char('0'+i) << int('0'+i) << endl ;
    }
    for (int i=0 ; i<26 ; ++i)
    {
        to_int['A'+i] = 10+i ;
        to_c[10+i] = 'A'+i ;
        cout << char('A'+i) << int('A'+i) << endl ;
    }
    for (int i=0 ; i<26 ; ++i)
    {
        to_int['a'+i] = 36 + i ;
        to_c[36+i] = 'a'+i ;
        cout << char('a'+i) << int('a'+i) << endl ;
    }
    return 0;
}
