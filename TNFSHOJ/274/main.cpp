#include <iostream>

using namespace std;

int main()
{
    string str ;
    int N , c , i , j ;
    cin >> N ;
    for (i=1 ; i<=N ; ++i)
    {
        cin >> str ;
        for (j=0 , c=0 ; j<str.size()/2 ; ++j)
        {
            if (str[j]!=str[str.size()-j-1])
            {
                c++ ;
            }
        }
        if (c==1)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
    return 0;
}
