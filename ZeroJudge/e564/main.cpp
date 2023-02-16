#include <iostream>
#include <queue>

using namespace std;

int id[1000005]={0} ;
queue <int> team[1005] , q ;

int main ()
{
    ios::sync_with_stdio (false);
    cin.tie(nullptr);
    int t , scenario=1 , n , temp ;
    string str ;
    while (cin>>t)
    {
        if (t==0) break ;
        cout << "Scenario #" << scenario++ << '\n' ;
        for (int i=1 ; i<=t ; ++i)
        {
            cin >> n ;
            for (int j=0 ; j<n ; ++j)
            {
                cin >> temp ;
                id[temp] = i ;
            }
        }
        while (cin>>str)
        {
            if (str=="STOP") break ;
            if (str=="ENQUEUE")
            {
                cin >> temp ;
                // 當元素不屬於任一隊伍時，enqueue 到 q 中
                if (team[id[temp]].empty()) q.emplace(id[temp]) ;
                // 把元素 enqueue 到對應的隊伍 id 中
                team[id[temp]].emplace(temp) ;
            }
            else if (str=="DEQUEUE")
            {
                int now=q.front() ;
                cout << team[now].front() << '\n' ;
                team[now].pop() ;
                if (team[now].empty()) q.pop() ;
            }
        }
        cout << '\n' ;
        while (!q.empty())
        {
            int now=q.front() ;
            while (!team[now].empty()) team[now].pop() ;
            q.pop() ;
        }
    }
    return 0;
}
