#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int i , j ;
    while (cin >> i >> j)
    {
        long long int a=i , b=j ;
        if (i>j) swap(i , j) ;
        long long maxx=-1 ;
        for (long long int k=i ; k<=j ; ++k)
        {
            long long int temp=k , ans=1 ;
            while (temp!=1)
            {
                if (temp&1) temp = temp*3+1 ;
                else temp /= 2 ;
                ans++ ;
            }
            maxx = max(maxx , ans) ;
        }
        cout << a << ' ' << b << ' ' << maxx << endl ;
    }
    return 0;
}