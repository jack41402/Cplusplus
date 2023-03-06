#include <iostream>

using namespace std;

string p , t ;

void check(string &str)
{
    bool c=false ;
    for (char i : str)
    {
        if (i=='.')
        {
            c = true ;
            break ;
        }
    }
    if (c)
    {
        for (int i=str.size()-1 ; i>=0 ; --i)
        {
            if (str[i]=='0')
            {
                str.pop_back() ;
                continue ;
            }
            if (str[i]=='.')
            {
                str.pop_back() ;
                break ;
            }
            else break ;
        }
    }
}

int main()
{
    bool pc=false , tc=false ;
    cin >> p >> t ;
    check(p) , check(t) ;
    if (p[0]=='-') pc = true ;
    if (t[0]=='-') tc = true ;
    if (pc || tc)
    {
        cout << "No\n" ;
        return 0;
    }
    if (p==t && (p!="0" && t!="0")) cout << "Yes\n" ;
    else cout << "No\n" ;
    return 0;
}