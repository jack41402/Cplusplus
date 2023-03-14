#include <iostream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , k , a , b , ans=1e9 , temp ;
    int use_a=0 , use_b=0 ;
    cin >> n >> k >> a >> b ;
    for (int i=0 ; i<=10 ; ++i)
    {
        for (int j=0 ; j<=10 ; ++j)
        {
            temp = n-(a*j+b*i) ;
            if (temp<ans && temp>=k)
            {
                ans = temp ;
                use_a = j ;
                use_b = i ;
            }
        }
    }
    cout << use_a << ' ' << use_b << ' ' << ans-k << '\n' ;
    return 0;
}
