#include <iostream>
#include <stack>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m , now=0 , car ;
    bool flag=true ;
    stack<int> station , repair ;
    cin >> n >> m ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> car ;
        while (!repair.empty())
        {
            station.emplace(repair.top()) ;
            repair.pop() ;
        }
        while (now<car) station.emplace(++now) ;
        if (station.top()==car) station.pop() ;
        else
        {
            for (int j=0 ; j<m && station.top()!=car ; ++j)
            {
                repair.emplace(station.top()) ;
                station.pop() ;
            }
            if (station.top()==car) station.pop() ;
            else
            {
                flag = false ;
                break ;
            }
        }
    }
    cout << ((flag) ? "yes" : "no") << '\n' ;
    return 0;
}
