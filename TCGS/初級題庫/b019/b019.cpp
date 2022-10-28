#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a , int b)
{
    return a>b;
}
int main()
{
    int N , i ;
    cin >> N ;
    int a[N] ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
    }
    sort (a , a + N , compare);
    for (i=0 ; i<N ; i=i+1)
    {
        cout << a[i] << " " ;
    }
    return 0;
}
