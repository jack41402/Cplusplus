#include <iostream>
#include <queue>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int temp ;
    priority_queue<int , vector<int> , less<>> left ;
    priority_queue<int , vector<int> , greater<>> right ;
    while (cin>>temp , temp)
    {
        if (left.empty() || temp<=left.top()) left.emplace(temp) ;
        else right.emplace(temp) ;
        while (left.size()>right.size())
        {
            right.emplace(left.top()) ;
            left.pop() ;
        }
        while (right.size()>left.size())
        {
            left.emplace(right.top()) ;
            right.pop() ;
        }
        if (left.size()==right.size()) cout << (left.top()+right.top())/2 << '\n' ;
        else cout << left.top() << '\n' ;
    }
    return 0;
}
