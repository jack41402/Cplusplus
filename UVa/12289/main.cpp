#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    string str ;
    cin >> n ;
    while (n--)
    {
        int compare=0 ;
        cin >> str ;
        if (str.size()==5)
        {
            cout << "3\n" ;
            continue ;
        }
        if (str[0]=='o') compare++ ;
        if (str[1]=='n') compare++ ;
        if (str[2]=='e') compare++ ;
        if (compare>=2) cout << "1\n" ;
        else cout << "2\n" ;
    }
    return 0;
}