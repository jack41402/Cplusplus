#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdio>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int index ;
    string str;
    char temp[100] ;
    double odd , even , num ;
    stringstream ss , toDouble ;
    while (getline(cin , str))
    {
        ss.clear() ;
        ss << str ;
        odd=0 , even=0 ;
        while (ss >> temp)
        {
            sscanf (temp , "%d:%lf" , &index , &num) ;
            (index&1) ? odd += num : even += num ;
        }
        cout << odd-even << endl ;
    }
    return 0;
}
