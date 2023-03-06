// https://tmt514.github.io/cp/tioj/1012
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m , car , now=0 ;
    vector<int> station ;
    cin >> n >> m ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> car ;
        while (now<car) station.emplace_back(++now) ;
        // 尋找目標車廂的位置
        auto it=find(station.begin() , station.end() , car) ;
        int dist=station.end()-it ;
        // 如果目標車廂距離頂部過遠，則不可能實現該組排列
        if (dist>m+1)
        {
            cout << "no\n" ;
            return 0;
        }
        else
        {
            station.erase(it) ;
        }
    }
    cout << "yes\n" ;
    return 0;
}