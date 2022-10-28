#include <iostream>

using namespace std;

int main()
{
    long long int n ;
    bool flag=false ;
    cin >> n ;
    for(long long int i=2 ; i*i<=n ; ++i)
    {
        if(n%i==0)
        {
            flag = true ;
            break ;
        }
    }
    cout << (flag ? "NO\n" : "YES\n" );
    return 0;
}