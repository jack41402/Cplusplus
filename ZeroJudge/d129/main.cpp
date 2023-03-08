#include <iostream>
#include <set>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<long long int> s ;
    s.emplace(1) ;
    auto p=s.begin() ;
    for (int i=1 ; i<1500 ; ++i)
    {
        p=s.begin() ;
        s.emplace(*p * 2) ;
        s.emplace(*p * 3) ;
        s.emplace(*p * 5) ;
        s.erase(p) ;
    }
    cout << "The 1500'th ugly number is " << *s.begin() << ".\n" ;
    return 0;
}
