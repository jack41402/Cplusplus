#include <iostream>

using namespace std;

int main()
{
    long long int T , x , y , R , tx , ty , sum ;
    sum = 0 ;
    cin >> T >> x >> y >> R ;
    for (int i=0 ; i<T ; ++i)
    {
        cin >> tx >> ty ;
        if (((tx-x)*(tx-x)+(ty-y)*(ty-y))<=R*R)
        {
            sum += 2 ;
        }
    }
    cout << sum << endl ;
    return 0;
}
