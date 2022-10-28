#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , P , C , i , j , t ;
    cin >> N >> P >> C ;
    vector<int> tree(P , 0) ;
    for (i=1 ; i<=N ; ++i)
    {
        for (j=0 ; j<P ; ++j)
        {
            cin >> t ;
            tree[j] += t ;
        }
    }
    for (i=1 , t=tree[0] ; i<P ; ++i)
    {
        t = t ^ tree[i] ;
    }
    cout << ((t==0) ? ((C==0) ? "Ivy Win!" : "Holly Win!") : ((C==0) ? "Holly Win!" : "Ivy Win!")) << endl ;
    return 0;
}
