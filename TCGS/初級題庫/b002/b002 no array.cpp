#include <iostream>

using namespace std;

int main()
{
    int N , a , i , S , j ;
    cin >> N ;
    S = 0 ;
    for (i=1 ; i<=N ; i=i+1)
    {
        cin >> a ;
        if (a>S)
        {
            S = a ;
            j = i ;
        }
    }
    cout << j << " " << S << endl ;
    return 0;
}
