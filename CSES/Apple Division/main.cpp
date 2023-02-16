#include <iostream>

using namespace std;

long long int apple[25] , total=0 , times , num , l , r , gap=1e12 ;

long long int power (int base , int pow)
{
    if (base==0) return 0;
    long long int ans=1 ;
    while (pow)
    {
        if (pow&1) ans *= base ;
        base *= base ;
        pow >>= 1 ;
    }
    return ans;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , index ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> apple[i] ;
        total += apple[i] ;
    }
    times = power(2 , n) ;
    for (int i=1 ; i<times ; ++i)
    {
        num = i , l = 0 , r = 0 ;
        index = 0 ;
        while (num)
        {
            if (num&1) l += apple[index] ;
            index++ ;
            num >>= 1 ;
        }
        r = total - l ;
        gap = min (gap , abs(r-l)) ;
    }
    cout << gap << '\n' ;
    return 0;
}
