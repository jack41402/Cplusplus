#include <iostream>
#include <stack>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    string str ;
    stack<char> s ;
    cin >> n ;
    cin.ignore() ;
    while (n--)
    {
        getline(cin , str) ;
        for (int i=0 ; i<str.size() ; ++i)
        {
            if (s.empty()) s.emplace(str[i]) ;
            else if ((str[i]==')' && s.top()=='(') || (str[i]==']' && s.top()=='[')) s.pop() ;
            else s.emplace(str[i]) ;
        }
        cout << ((s.empty()) ? "Yes" : "No") << '\n' ;
        while (!s.empty()) s.pop() ;
    }
    return 0;
}
