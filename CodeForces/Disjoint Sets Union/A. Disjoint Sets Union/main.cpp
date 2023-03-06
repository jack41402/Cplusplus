#include <iostream>

using namespace std;

int p[100005] ;

void initialize (int n)
{
    for (int i=1 ; i<=n ; ++i)
    {
        p[i] = i ;
    }
}

int find (int x)
{
    return p[x]==x ? x : (p[x]=find(p[x]));
}

void unite (int x , int y)
{
    p[find(x)] = find(y) ;
}

bool equivalence (int x , int y)
{
    return find(x)==find(y);
}

int main()
{
    int n , m , x , y ;
    bool c ;
    string str ;
    cin >> n >> m ;
    initialize(n) ;
    for (int i=0 ; i<m ; ++i)
    {
        cin >> str >> x >> y ;
        if (str=="union") unite(x , y) ;
        else
        {
            c = equivalence(x , y) ;
            if (c) cout << "YES\n" ;
            else cout << "NO\n" ;
        }
    }
    return 0;
}
