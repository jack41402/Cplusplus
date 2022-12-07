#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans ;
    string str , temp , find ;
    bool flag ;
    while (cin>>str)
    {
        for (int i=1 ; i<=str.size() ; ++i)
        {
            find += str[i-1] ;
            if (str.size()%i!=0) continue ;
            flag = true ;
            for (int j=i ; j<str.size() ; j+=i)
            {
                temp = str.substr (j , i) ;
                if (temp!=find)
                {
                    flag = false ;
                    break ;
                }
            }
            if (flag)
            {
                ans = i ;
                break ;
            }
        }
        cout << find << '\n' ;
    }
    return 0;
}