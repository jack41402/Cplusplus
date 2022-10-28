#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K , M , i ;
    long long int a , b ;
    double N , ans ;
    vector<int>::iterator x ;
    vector<int>::iterator y ;
    cin >> N >> K ;
    vector<int> arr(N) ;
    for(i=0 ; i<N ; ++i)
    {
        cin >> arr[i] ;
    }
    sort(arr.begin() , arr.end()) ;
    cin >> M ;
    for (i=1 ; i<=M ; ++i)
    {
        cin >> a >> b ;
        x = lower_bound(arr.begin() , arr.end() , a) ;
        y = upper_bound(arr.begin() , arr.end() , b) ;
        cout << fixed << setprecision(K) << 100 * ((int)(y-x) / N) << "%\n" ;
    }
    return 0;
}
