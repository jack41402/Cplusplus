#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N , P , C , i , j , inp ;
    cin >> N >> P >> C ;
    vector<int> tree(P, 0) ;
    for (i=0 ; i<N ; ++i)
    {
        for (j=0 ; j<P ; ++j)
        {
            cin >> inp ;
            tree[j] += inp ;
        }
    }
    int nim_sum=tree[0] ;
    for (auto it=tree.begin()+1 ; it!=tree.end() ; ++it)
        nim_sum = nim_sum ^ (*it) ;

    if (nim_sum == 0)
        cout << ((C == 0) ? "Ivy Win!" : "Holly Win!") << "\n";
    else
        cout << ((C == 0) ? "Holly Win!" : "Ivy Win!") << "\n";

    return 0;
}