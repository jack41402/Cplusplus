#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int arr[200005] ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , ans=0 , cnt=0 , temp , MAX=-1 ;
    bool flag=false ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> temp ;
        if (temp==1) continue ;
        arr[cnt++] = temp ;
        MAX = max(MAX , temp) ;
    }
    sort(arr , arr+cnt) ;
    for (int i=MAX ; i>=0 ; --i)
    {
        temp = 0 ;
        for (int j=cnt-1 ; j>=0 ; --j)
        {
            if (arr[j]<i) break ;
            if (arr[j]%i==0) temp++ ;
            if (temp==2)
            {
                cout << i << '\n' ;
                return 0;
            }
        }
    }
    return 0;
}