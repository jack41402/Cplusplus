#include <iostream>
#include <stack>

using namespace std;

int train[1005] ;

int main ()
{
    ios::sync_with_stdio (false);
    cin.tie(nullptr);
    int n , temp ;
    while (cin>>n , n)
    {
        while (true)
        {
            int index=1 ;
            stack <int> s ;
            for (int i=1 ; i<=n ; ++i)
            {
                cin >> temp ;
                if (temp==0) break ;
                while ((s.empty() || s.top()!=temp) && index<=n)
                {
                    s.emplace(index) ;
                    index++ ;
                }
                if (s.top()==temp) s.pop() ;
            }
            if (temp==0) break ;
            if (s.empty()) cout << "Yes\n" ;
            else cout << "No\n" ;
        }
        cout << '\n' ;
    }
    return 0;
}
