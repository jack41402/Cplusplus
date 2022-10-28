#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int N , a , b , c , i , ans , x , y ;
    while (true)
    {
        cin >> N ;
        if (cin.fail())
        {
            break ;
        }
        for (i=1 , a=0 , b=0 , x=2 , y=2 ; i<=N ; i++)
        {
            cin >> c ;
            if (i>1 && c>0 && x>=2)
            {
                a += c ;
                x = 0 ;
            }
            if (i>=1 && c>0 && y>=2)
            {
                b += c ;
                y = 0 ;
            }
            x++ ;
            y++ ;
        }
        ans = max(a , b) ;
        cout << ans << endl ;
    }
    return 0;
}
