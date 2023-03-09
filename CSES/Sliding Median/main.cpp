#include <iostream>
#include <set>

using namespace std;

multiset<long long int> upper , lower ;
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
        lower.emplace(temp) ;
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

}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k ;
    cin >> temp ;
    lower.emplace(temp) ;
    for (int i=1 ; i<n ; ++i)
    {
        cin >> temp ;
        insert(temp) ;
    }
    return 0;
}