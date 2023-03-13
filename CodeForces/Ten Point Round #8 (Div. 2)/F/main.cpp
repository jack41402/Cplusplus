#include <iostream>

using namespace std;

int cmp (string a , string b)
{
    string aa="" , bb="" ;
    for (int i=0 ; i<a.size() ; ++i)
    {
        if (a[i]!=' ') aa += a[i] ;
    }
    for (int i=0 ; i<b.size() ; ++i)
    {
        if (b[i]!=' ') bb += b[i] ;
    }
    if (aa==bb) return 1;
    else return 0;
}

int main()
{
    string a , b ;
    int n , temp ;
    cin >> n ;
    cin.ignore();
    for (int i=0 ; i<n ; ++i)
    {
        getline(cin , a) ;
        getline(cin , b) ;
        if (a==b) cout << "Accepted\n" ;
        else
        {
            temp = cmp(a , b) ;
            if (temp) cout << "Presentation Error\n" ;
            else cout << "Wrong Answer\n" ;
        }
    }
    return 0;
}
