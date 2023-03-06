#include <iostream>

using namespace std;

bool check[2][15] ;

int main()
{
    bool c=0 ;
    string a , b ;
    cin >> a >> b ;
    for (int i=0 ; i<a.size() ; ++i) check [0][int(a[i])-48] = 1 ;
    for (int i=0 ; i<b.size() ; ++i) check [1][int(b[i])-48] = 1 ;
    for (int i=0 ; i<10 ; ++i)
    {
        if (check[0][i]==1 && check[1][i]==1)
        {
            cout << "Yes\n" ;
            c = 1 ;
            break ;
        }
    }
    if (c==0) cout << "No\n" ;
    return 0;
}
