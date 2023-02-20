#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , count=1 ;
    while (cin>>n)
    {
        bool flag=true ;
        vector <int> arr(n) ;
        set <int> s ;
        for (int i=0 ; i<n ; ++i) cin >> arr[i] ;
        for (int i=0 ; i<n ; ++i)
        {
            for (int j=i ; j<n ; ++j)
            {
                if (s.find(arr[i]+arr[j])==s.end())
                {
                    s.emplace(arr[i]+arr[j]) ;
                }
                else
                {
                    flag = false ;
                    break ;
                }
            }
        }
        cout << "Case #" << count++ << ": It is " << ((flag) ? "" : "not ") << "a B2-Sequence.\n\n" ;
        cout << flush ;
    }
    return 0;
}