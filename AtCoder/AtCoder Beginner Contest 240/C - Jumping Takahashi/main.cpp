#include <iostream>
#include <bitset>

using namespace std;

bitset<10005> visit[105] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , x , a , b ;
    cin >> n >> x ;
    visit[0][0] = 1 ;
    for (int i=1 ; i<=n ; ++i)
    {
        cin >> a >> b ;
        visit[i] = (visit[i-1] << a) | (visit[i-1] << b) ;
    }
    if (visit[n][x]) cout << "Yes\n" ;
    else cout << "No\n" ;
    return 0;
}
