#include <iostream>

using namespace std;

int main()
{
    int i , k ;
    k = 0 ;
    string S ;
    double c ;
    cin >> S ;
    for (i=0 ; i<S.size() ; i=i+1)
    {
        if (S[i]=='S')
        {
            k = k + 1 ;
        }
    }
    c = (double)k / (double)S.size() ;
    if (c>=0.1)
    {
        cout << "EUROPE" << endl ;
    }
    else if (c>=0.02 && c<0.1)
    {
        cout << "NORMAL" << endl ;
    }
    else if (c<0.02)
    {
        cout << "AFRICA" << endl ;
    }
    return 0;
}
