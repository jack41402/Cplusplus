#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a , b , k , temp=0 , ans=0 ;
    cin >> a >> b ;
    while(a--)
    {
        cin >> k ;
        if (k>temp)
        {
            ans = temp ;
            temp = k ;
        }
        else if (k!=temp && k>ans)
        {
            ans = k ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}