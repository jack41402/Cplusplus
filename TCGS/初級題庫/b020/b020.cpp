#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N , i ;
    cin >> N ;
    string a[N] ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
    }
    sort (a , a+N);
    for (i=0 ; i<N ; i=i+1)
    {
        cout << a[i] << endl ;
    }
    return 0;
}
