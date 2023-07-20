#include <iostream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , temp , MIN=1e9 , MAX=-1e9 ;
    long long int sum=0 ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        if (temp<MIN) MIN = temp ;
        if (temp>MAX) MAX = temp ;
        sum += temp ;
    }
    sum -= MIN + MAX ;
    cout << sum/(n-2) << '\n' ;
    return 0;
}
