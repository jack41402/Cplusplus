#include <iostream>

using namespace std;

int check(string str)
{
    string temp="" ;
    int i , S=0 ;
    for (i=0 ; i<str.size() ; i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            temp += str[i]+32 ;
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            temp += str[i] ;
        }
    }
    for (i=0 ; i<temp.size()/2 ; i++)
    {
        if (temp[i]==temp[temp.size()-1-i])
        {
            S++ ;
        }
        else
        {
            break ;
        }
    }
    if (S==temp.size()/2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int c ;
    string str ;
    while (true)
    {
        getline (cin , str) ;
        if (cin.fail())
        {
            break ;
        }
        c = check(str) ;
        if (c==1)
        {
            cout << "SETUP! " << str << endl ;
        }
        else if (c==0)
        {
            cout << str << endl ;
        }
    }
    return 0;
}
