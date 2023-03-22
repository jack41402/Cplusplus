#include <iostream>
#include <vector>

using namespace std;

int n , m ;
vector<int> pour ;

int main()
{
    for (int i=0 ; i<3 ; ++i)
    {
        cin >> m ;
        pour.emplace_back(m) ;
    }
    for (auto i : pour)
    {
        pour.emplace_back(-i) ;
    }
    for (auto i : pour)
    {
        cout << i << endl ;
    }
    return 0;
}