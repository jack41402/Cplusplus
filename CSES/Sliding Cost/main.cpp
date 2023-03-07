// https://usaco.guide/problems/cses-1077-sliding-cost/solution#abstract
#include <iostream>
#include <set>

using namespace std;

multiset<long long int> upper , lower ;
long long int arr[200005] , sum_upper=0 , sum_lower=0 ;
long long int n , k , moving ;

// 向 multiset upper 與 lower 中插入元素
// 同時計算 upper 與 lower 中元素的和
// 確保 upper 與 lower 分別不超過 k/2 與 (k+1)/2，以得到正確的中位數
void insert (long long int value)
{
    long long int temp=*lower.rbegin() ;
    if (temp<value)
    {
        upper.emplace(value) ;
        sum_upper += value ;
        if (upper.size()>k/2)
        {
            moving = *upper.begin() ;
            lower.emplace(moving) ;
            sum_lower += moving ;
            sum_upper -= moving ;
            upper.erase(upper.find(moving)) ;
        }
    }
    else
    {
        lower.emplace(value) ;
        sum_lower += value ;
        if (lower.size()>(k+1)/2)
        {
            moving = *lower.rbegin() ;
            upper.emplace(moving) ;
            sum_upper += moving ;
            sum_lower -= moving ;
            lower.erase(lower.find(moving)) ;
        }
    }
}

// 向右移動 window
void erase (long long int value)
{
    if (upper.find(value)!=upper.end())
    {
        upper.erase(upper.find(value)) ;
        sum_upper -= value ;
    }
    else
    {
        lower.erase(lower.find(value)) ;
        sum_lower -= value ;
    }
    if (lower.empty())
    {
        moving = *upper.begin() ;
        lower.emplace(moving) ;
        sum_lower += moving ;
        sum_upper -= moving ;
        upper.erase(upper.begin()) ;
    }
}

// 由證明可以得到，總花費為 (Median * k/2 - sum_lower) + (sum_upper - Median * k/2)
// 當 k 為偶數時，可以化簡為 sum_upper - sum_lower
// 當 k 為奇數時，可以化簡為 sum_upper - sum_lower + Median
long long int median ()
{
    return ((k%2==0) ? 0 : *lower.rbegin()) ;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int stop , mid ;
    multiset<int> s ;
    cin >> n >> k ;
    for (int i=0 ; i<n ; ++i) cin >> arr[i] ;
    lower.emplace(arr[0]) ;
    sum_lower += arr[0] ;
    for (int i=1 ; i<k ; ++i) insert(arr[i]) ;
    cout << sum_upper - sum_lower + median() ;
    if (n!=1) cout << ' ' ;
    for (int i=k ; i<n ; ++i)
    {
        if (k==1)
        {
            insert(arr[i]) ;
            erase(arr[i-k]) ;
        }
        else
        {
            erase(arr[i-k]) ;
            insert(arr[i]) ;
        }
        cout << sum_upper - sum_lower + median() ;
        if (i!=n-1) cout << ' ' ;
    }
    cout << '\n' ;
    return 0;
}