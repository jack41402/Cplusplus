#include <iostream>

using namespace std;

int main()
{
    int N , num , i ;
    string a[10] , k ;
    for (i=0 ; i<10 ; i=i+1)
    {
        a[i] = "EMPTY" ;
    }
    cin >> N ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> k >> num ;
        a[num-1] = k ;
    }
    for (i=0 ; i<10 ; i=i+1)
    {
        cout << a[i] << endl ;
    }
    return 0;
}
