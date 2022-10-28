#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int check(string s)
{
    equal(s.begin() , s.begin() + s.size()/2 , s.rbegin()) ;
}

int main()
{
    int t , c ;
    cin >> t ;
    string str[t] , ans[t] ;
    for (int i=0 ; i<t ; ++i)
    {
        cin >> str[i] ;
    }
    for (int i=0 ; i<t ; ++i)
    {
        ans[i] = "" ;
        sort(str[i].begin() , str[i].end()) ;
        for (int j=0 ; j<str[i].size() ; j+=2)
        {
            ans[i] += str[i][j] ;
        }
        if (str[i].size()%2==1)
        {
            for (int j=str[i].size()-2 ; j>=0 ; j-=2)
            {
                ans[i] += str[i][j] ;
            }
        }
        else
        {
            for (int j=str[i].size()-1 ; j>=0 ; j-=2)
            {
                ans[i] += str[i][j] ;
            }
        }
        for (int j=0 ; j<t ; ++j)
        {
            if (check(ans[j]))
            {
            }
            else
            {
                ans[j] = "-1" ;
            }
        }
    }
    for (int i=0 ; i<t ; ++i)
    {
        cout << ans[i] << '\n' ;
    }
    return 0;
}
