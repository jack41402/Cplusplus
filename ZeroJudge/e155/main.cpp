#include <iostream>
#include <vector>
#include <queue>
#include <deque>

using namespace std;

int main ()
{
    ios::sync_with_stdio (false) ;
    cin.tie(nullptr) ;
    int n , temp ;
    vector<int> discard ;
//    queue <int , deque<int>> deq ;
    while (cin>>n)
    {
        if (n==0) break ;
        cout << "Discarded cards: " ;
        if (n==1)
        {
            cout << "\nRemaining card: 1\n" ;
            continue ;
        }
        deque<int> deq ;
        for (int i=1 ; i<=n ; ++i) deq.emplace_back(i) ;
        discard.clear() ;
        while (deq.size()!=1)
        {
            discard.emplace_back(deq.front()) ;
            deq.pop_front() ;
            temp = deq.front() ;
            deq.pop_front() ;
            deq.emplace_back(temp) ;
        }
        cout << discard[0] ;
        for (int i=1 ; i<discard.size() ; ++i) cout << ", " << discard[i] ;
        cout << "\nRemaining card: " << deq.front() << '\n' ;
    }
    return 0;
}
