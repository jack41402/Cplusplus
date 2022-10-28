#include <iostream>

using namespace std;

int ans[1503]={0} ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q , n ;

    cin >> q ;
    for (int i=1 ; i<=500 ; ++i)
    {
        for (int j=1 ; j<=500 ; ++j)
        {
            for (int k=1 ; k<=500 ; ++k)
            {
                ans[i+j+k]++  ;
            }
        }
    }
    for (int i=0 ; i<q ; ++i)
    {
        cin >> n ;
        cout << ans[n] << '\n' ;
    }
    return 0;
}
