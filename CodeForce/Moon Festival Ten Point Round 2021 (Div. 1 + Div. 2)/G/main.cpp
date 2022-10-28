#include <iostream>
#include <algorithm>

using namespace std;

string str[1005] ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    string ans ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> str[i] ;
    }
    sort(str , str+n , [](string a , string b)
    {
        return a+b>b+a ;
    }) ;
    for (int i=0 ; i<n ; ++i)
    {
        cout << str[i] ;
    }
    cout << '\n' ;
    return 0;
}