#include <iostream>
#include <set>

using namespace std;

multiset<long long int> upper , lower ;
long long int arr[200005] ;
long long int n , k , temp ;

void insert (long long int num)
{
    temp = *lower.rbegin() ;
    if (temp<num)
    {
        upper.emplace(temp) ;
        if (upper.size()>k/2)
        {
            temp = *upper.begin() ;
            lower.emplace(temp) ;
            upper.erase(upper.begin()) ;
        }
    }
    else
    {
        lower.emplace(num) ;
        if (lower.size()>(k+1)/2)
        {
            temp = *lower.rbegin() ;
            upper.emplace(temp) ;
            lower.erase(lower.find(temp)) ;
        }
    }
}

void erase (long long int num)
{
    if (upper.find(num)!=upper.end()) upper.erase(upper.find(num)) ;
    else lower.erase(lower.find(num));
    if (lower.empty())
    {
        temp = *upper.begin() ;
        lower.emplace(temp) ;
        upper.erase(upper.begin()) ;
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k ;
    for (int i=0 ; i<n ; ++i) cin >> arr[i] ;
    lower.emplace(arr[0]) ;
    for (int i=1 ; i<k ; ++i) insert(arr[i]) ;
    cout << *lower.rbegin() << ' ' ;
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
        cout << *lower.rbegin() << ' ' ;
    }
    cout << '\n' ;
    return 0;
}