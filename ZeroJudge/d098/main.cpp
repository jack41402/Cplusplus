#include <iostream>
#include <sstream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num , sum ;
    bool flag ;
    stringstream ss , toInt ;
    string str , temp ;
    while (getline(cin , str))
    {
        ss.clear() ;
        ss << str ;
        sum=0 ;
        while (ss >> temp)
        {
            flag = true ;
            for (char i : temp)
            {
                if (!isdigit (i))
                {
                    flag = false ;
                    break ;
                }
            }
            if (!flag) continue ;
            toInt.clear() ;
            toInt << temp ;
            toInt >> num ;
            sum += num ;
        }
        cout << sum << endl ;
    }
    return 0;
}
