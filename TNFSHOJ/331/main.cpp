#include <iostream>

using namespace std;

int main()
{
    unsigned long long int i , a=0 , b=0 , ans ;
    string t1 , t2 ;
    cin >> t1 >> t2 ;
    for (i=0 ; i<t1.size() ; i++)
    {
        if (t1[i]=='0')
        {
            a++ ;
        }
    }
    for (i=0 ; i<t2.size() ; i++)
    {
        if (t2[i]=='0')
        {
            b++ ;
        }
    }
    ans = (t1.size()-a) * (t2.size()-b) ;
    cout << ans << endl ;
    return 0;
}
