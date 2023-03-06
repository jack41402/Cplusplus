#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int n , m , temp , ans=0 ;
    bool flag=true , count=false ;
    vector<int> arr ;
    cin >> n >> m ;
    for (int i=0 ; i<n ; ++i)
    {
        int num=0 ;
        for (int j=0 ; j<m ; ++j)
        {
            cin >> temp ;
            num = max(temp , num) ;
        }
        ans += num ;
        arr.emplace_back(num) ;
    }
    cout << ans << '\n' ;
    for (int i=0 ; i<arr.size() ; ++i)
    {
        if (ans%arr[i]==0)
        {
            if (!count) cout << arr[i] , count=true ;
            else cout << ' ' << arr[i] ;
            if (flag) flag = false ;
        }
    }
    if (flag) cout << -1 ;
    cout << '\n' ;
    return 0;
}
