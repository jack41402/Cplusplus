#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

set<int> t ;

int line(int N , vector<int> arr , vector<int> node , int a , int time)
{
    int temp=binary_search(node.begin() , node.end() , a) ;
}

int main()
{
    int N , a , b ;
    cin >> N ;
    int temp[N][2] ;
    vector<vector<int>> arr[N] ;
    for (int i=0 ; i<N ; ++i)
    {
        cin >> a >> b ;
        temp[i][0] = a , temp[i][1] = b , t.insert(a) , t.insert(b) ;
    }
    vector<int> node(t.begin() , t.end()) ;
    vector<bool> c(t.begin() , t.end()) ;
    for (int i=0 ; i<N ; ++i)
    {
        arr[binary_search(temp , temp+N , temp[i][0])].emplace_back(temp[i][1]) ;
    }
    while (true)
    {
        cin >> a >> b ;
        if (a==0 && b==0) break ;
    }
    return 0;
}
/*queue<pair<int , int>> node ;
int map[1003][1003] ;
int dis[1003][1003] ;
bool use[1003][1003] ;
int dx[4]={0 , 0 , 1 , -1} ;
int dy[4]={1 , -1 , 0 , 0} ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , M , x1 , y1 , x2 , y2 ;
    cin >> N >> M ;
    for (int i=0 ; i<N ; ++i)
    {
        for (int j=0 ; j<M ; ++j)
        {
            cin >> map[i][j] ;
        }
    }
    memset(dis , 0x3f3f3f3f , sizeof(dis)) ;
    cin >> x1 >> y1 >> x2 >> y2 ;
    node.emplace(x1 , y1) ;
    use[x1][y1] = 1 ;
    dis[x1][y1] = 0 ;
    while (!node.empty())
    {
        int x=node.front().first , y=node.front().second ;
        use[x][y] = 1 ;
        node.pop() ;
        for (int i=0 ; i<4 ; ++i)
        {
            int nx = x + dx[i] ;
            int ny = y + dy[i] ;
            if (nx<0 || ny<0 || nx>=N || ny>=M) continue ;
            if (use[nx][ny] || map[nx][ny]) continue ;
            node.emplace(nx , ny) ;
            use[nx][ny] = 1 ;
            dis[nx][ny] = min(dis[x][y]+1 , dis[nx][ny]) ;
        }
    }
    if (dis[x2][y2]==0x3f3f3f3f) cout << -1 << '\n' ;
    else cout << dis[x2][y2] << '\n' ;
    return 0;
}*/