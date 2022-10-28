#include <iostream>

using namespace std;

int main()
{
    int N , i ;
    string str ;
    cin >> N >> str ;
    for (i=0 ; i<N ; i++)
    {
        if ((int)str[i]>=65 && (int)str[i]<=90)
        {
            str[i] = ((str[i]-65)+97) ;
        }
        else if ((int)str[i]>=97 && (int)str[i]<=122)
        {
            str[i] = ((str[i]-97)+65) ;
        }
    }
    cout << str << endl ;
    return 0;
}
