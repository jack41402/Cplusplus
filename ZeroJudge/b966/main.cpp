#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , i , j , x , y , a , b , c , d ;
    cin >> n ;
    vector<pair<int , int>> vec(n) ;
    vector<bool> visited(n) ;
    for(i=0 ; i<n ; ++i)
    {
        cin >> x >> y ;
        vec[i] = {x , y} ;
    }
    int total=0 ;
    sort(vec.begin() , vec.end()) ;
    for(i=0 ; i<n ; ++i)
    {
        if(visited[i]==true) continue ;
        a=vec[i].first , b=vec[i].second ;
        for(j=i ; j<n ; ++j)
        {
            c=vec[j].first , d=vec[j].second ;
            if (a<=c && c<=b)
            {
                b = max(b , d) ;
                visited[j] = true ;
            }
            else
            {
                break ;
            }
        }
        total += abs(b-a);
    }
    cout << total << endl;
}