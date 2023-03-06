#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int n , size=0 ;
    string str , ans ;
    vector<string> arr ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> str ;
        arr.emplace_back(str) ;
        size = max(size , (int)str.size()) ;
    }
    for (int i=0 ; i<size ; ++i)
    {
        for (int j=0 ; j<n ; ++j)
        {
            if (i>=arr[j].size()) continue ;
            if (isalpha(arr[j][i])) ans += arr[j][i] ;
        }
    }
    cout << ans << '\n' ;
    return 0;
}
