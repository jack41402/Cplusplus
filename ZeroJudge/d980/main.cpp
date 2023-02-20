#include <iostream>
#include <algorithm>

using namespace std;

long long int side[3] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t ;
    string str ;
    for (int i=1 ; i<=t ; ++i)
    {
        cin >> side[0] >> side[1] >> side[2] ;
        cout << "Case " << i << ": " ;
        // 當 a[0] <= 0 時，無法形成一個三角形。
        // a[0] = a[2]：三邊均等長。
        // a[0] = a[1] 或 a[1] = a[2]：恰有兩邊等長
        // 三邊均不等長的情況下，需判斷是否能構成合法三角形：檢查 a[0] + a[1] > a[2] 是否成立。
        sort (side , side+3) ;
        if (side[0]<=0) cout << "Invalid\n" ;
        else if (side[0]==side[2]) cout << "Equilateral\n" ;
        else if (side[0]==side[1] || side[1]==side[2] || side[0]==side[2]) cout << "Isosceles\n" ;
        else if (side[0]+side[1]>side[2]) cout << "Scalene\n" ;
        else cout << "Invalid\n" ;
    }
    return 0;
}