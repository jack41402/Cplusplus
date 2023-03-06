#include <iostream>
#include <deque>

using namespace std;

string e[105] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m , n ;
    string encrypt ;
    deque<char> S , T ;
    cin >> m >> n ;
    for (int i=0 ; i<m ; ++i) cin >> e[i] ;
    cin >> encrypt ;
    for (auto i : encrypt) T.emplace_back(i) ;
    for (int i=m-1 ; i>=0 ; --i)
    {
        int count=0 ;
        for (int j=n-1 ; j>=0 ; --j)
        {
            if (e[i][j]=='1')
            {
                count++ ;
                S.emplace_back(T[j]) ;
            }
            else
            {
                S.emplace_front(T[j]) ;
            }
        }
        if (count&1)
        {
            for (int j=0 ; j<n/2 ; ++j)
            {
                swap(S[j] , S[(n+1)/2+j]) ;
            }
        }
            T = S ;
            S.clear() ;
    }
    for (auto i : T)
    {
        cout << i ;
    }
    cout << '\n' ;
    return 0;
}
