#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss ;
    int N , i , j , ans=0 ;
    string str , temp ;
    cin >> N ;
    for (i=0 ; i<=N ; i++)
    {
        getline (cin , str) ;
        for (j=0 ; j<str.size() ; j++)
        {
            if (str[j]==char(63) || str[j]==char(46) || str[j]==char(33) || str[j]==char(44) || str[j]==char(58) || str[j]==char(59) || str[j]==char(40) || str[j]==char(41) || str[j]==char(45) || str[j]==char(39))
            {
                str[j] = ' ' ;
            }
            else if ((int)str[j]>=65 && (int)str[j]<=90)
            {
                str[j] = char(((int)str[j])+32) ;
            }
        }
        ss.str("") ;
        ss.clear() ;
        ans = 0 ;
        ss << str ;
        while (1)
        {
            if (ss.fail())
            {
                break ;
            }
            temp = "" ;
            ss >> temp ;
            if (temp=="am" || temp=="are" || temp=="is" || temp=="was" || temp=="were" || temp=="be" || temp=="been")
            {
                ans++ ;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}
