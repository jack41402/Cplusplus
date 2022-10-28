#include <iostream>

using namespace std;

int main()
{
    int i , j , S ;
    S = 0 ;
    string N ;
    cin >> N ;
    for (i=0 , j=N.size()-1 ; i<N.size()/2 && j>N.size()/2-1 ; i=i+1 , j=j-1)
    {
        if (N[i]==N[j])
        {
            S = S + 1 ;
        }
    }
    if (S==N.size()/2)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    return 0;
}
