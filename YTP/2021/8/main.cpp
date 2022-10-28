#include <iostream>

using namespace std;

string str[1000005] ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m , a , b ;
    cin >> n >> m ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> str[i] ;
    }
    while (m--)
    {
        cin >> a >> b ;
        int ans ;
        for (int i=0 ; i<min(str[a].size() , str[b].size()) ; ++i)
        {
            if (str[a][i]==str[b][i]) ans=i+1 ;
            else
            {
                ans = i ;
                break;
            }
        }
        cout << ans << '\n' ;
    }
    return 0;
}