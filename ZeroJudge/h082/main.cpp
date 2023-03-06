#include <iostream>
#include <vector>

using namespace std;

long long int S[1005] , T[1005] , count[1005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n , m , temp ;
    cin >> n >> m ;
    vector<long long int> idx , winner , loser ;
    for (int i=1 ; i<=n ; ++i) cin >> S[i] ;
    for (int i=1 ; i<=n ; ++i) cin >> T[i] ;
    for (int i=0 ; i<n ; ++i) cin >> temp , idx.emplace_back(temp) ;
    while (idx.size()>1)
    {
        long long int a , b , c , d ;
        for (int i=0 ; i<idx.size() ; i+=2)
        {
            a = S[idx[i]] , b = T[idx[i]] , c = S[idx[i+1]] , d = T[idx[i+1]] ;
            if (i==idx.size()-1)
            {
                winner.emplace_back(idx[i]) ;
                break ;
            }
            if (a*b>=c*d)
            {
                winner.emplace_back(idx[i]) ;
                if (++count[idx[i+1]]<m) loser.emplace_back(idx[i+1]) ;
                S[idx[i]] = a + c*d / (2*b) , T[idx[i]] = b + c*d / (2*a) ;
                S[idx[i+1]] = c + c / 2 , T[idx[i+1]] = d + d / 2 ;
            }
            else
            {
                winner.emplace_back(idx[i+1]) ;
                if (++count[idx[i]]<m) loser.emplace_back(idx[i]) ;                S[idx[i+1]] = c + a*b / (2*d) , T[idx[i+1]] = d + a*b / (2*c) ;
                S[idx[i]] = a + a / 2 , T[idx[i]] = b + b / 2 ;
            }
        }
        idx.clear() ;
        idx.insert(idx.end() , winner.begin() , winner.end()) ;
        idx.insert(idx.end() , loser.begin() , loser.end()) ;
        winner.clear() , loser.clear() ;
    }
    cout << idx[0] << '\n' ;
    return 0;
}
