#include <iostream>

using namespace std;

int main()
{
    int i ;
    string str ;
    bool c=0 ;
    cin >> str ;
    int a=str.size() , temp=str.size()-1 ;
    if (a%2!=0)
    {
        cout << "NO" << endl ;
    }
    else
    {
        for (i=0 ; i<a/2 ; i++ , temp--)
        {
            if ((int)str[i]!=(int)str[temp])
            {
                c = 1 ;
                break ;
            }
        }
        if (c==0)
        {
            cout << "YES" << endl ;
            for (i=0 ; i<a/2 ; i++)
            {
                cout << str[i] ;
            }
            cout << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
    return 0;
}
