#include <iostream>

using namespace std;

int main()
{
    long long int ans=0 ;
    string str ;
    cin >> str ;
    for (int i=0 ; i<str.size() ; ++i)
    {
        if ((str[i]-'0')%4==0) ans++ ;
    }
    for (int i=0 ; i<str.size()-1 ; ++i)
    {
        if (((str[i]-'0')*10+str[i+1]-'0')%4==0) ans += i+1 ;
    }
    cout << ans << '\n' ;
    return 0;
}
