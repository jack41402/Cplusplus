#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int arr[200005] , exist[1000005] , divisor[1000005] ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , temp ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        if (temp==1 || exist[temp]>=2) continue ;
        exist[temp]++ ;
        for (int j=1 ; j*j<=temp ; ++j)
        {
            if (temp%j==0)
            {
                divisor[j]++ ;
                if (j!=temp/j) divisor[temp/j]++ ;
            }
        }
    }
    for (int i=1000005 ; i>=1 ; --i)
    {
        if (divisor[i]>=2)
        {
            cout << i << '\n' ;
            break ;
        }
    }
    return 0;
}