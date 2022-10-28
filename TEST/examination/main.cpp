#include <iostream>
#include <set>
#include <algorithm>
#include <bitset>

using namespace std;

int main()
{
    int i , N , temp;
    cin >> N ;
    set<double> arr ;
    for (i=0 ; i<N ; ++i)
    {
        cin >> temp ;
        arr.insert(temp) ;
    }
    N = arr.size() ;
    string s[N] ;

    for (i=0 ; i<N ; i++)
    {
        bitset<N> bs(i) ;
        s[i] = bs.to_string() ;
    }
    return 0;
}
