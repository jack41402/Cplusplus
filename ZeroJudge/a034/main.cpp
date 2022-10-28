#include <iostream>

using namespace std;

int main()
{
    int n ;
    while (cin>>n)
    {
        string ans ;
        while (n!=0)
        {
            ans += char(n&1) + '0' ;
            n >>= 1 ;
        }
        for (int i=ans.size()-1 ; i>=0 ; --i) cout << ans[i] ;
        cout << '\n' ;
    }
    return 0;
}
