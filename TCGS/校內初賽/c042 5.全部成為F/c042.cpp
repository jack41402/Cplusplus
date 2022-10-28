#include <iostream>

using namespace std;

int main()
{
    int S[10000] , i , j , k ;
    j = 0 ;
    string F ;
    cin >> F ;
    for (i=0 ; i<F.size() ; i=i+1)
    {
        if (F[i]=='F')
        {
            S[j] = S[j] + 1 ;
        }
        else if (F[i]=='f')
        {
            j = j + 1 ;
        }
    }
    k = 0 ;
    for (i=0 ; i<=j ; i=i+1)
    {
        if (S[i]>k)
        {
            k = S[i] ;
        }
    }
    cout << k << endl ;
    return 0;
}
//70 F 102 f
