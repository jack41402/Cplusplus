#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0) ;
    long long int n , p , temp , reverse ;
    string str ;
    stringstream ss ;
    cin >> n ;
    while (n--)
    {
        int count=0 ;
        bool flag=false ;
        cin >> p ;
        while (!flag)
        {
            temp = p , reverse=0 , flag=true ;
            while (temp)
            {
                reverse *= 10 ;
                reverse += temp%10 ;
                temp /= 10 ;
            }
            p += reverse ;
            ss.clear() ;
            ss << p ;
            ss >> str ;
            for (int i=0 ; i<str.size()/2 ; ++i)
            {
                if (str[i]!=str[str.size()-i-1])
                {
                    flag = false ;
                    break ;
                }
            }
            count++ ;
        }
        cout << count << ' ' << str << '\n' ;
    }
    return 0;
}
