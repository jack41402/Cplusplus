#include <bits/stdc++.h>

using namespace std;

int main()
{
    int array[10];
    int i , a ;
    string input ;
    cin >> i >> input;
    for (a=0 ; a<input.size() ; a=a+1)
    {
        cout << (char)(((input[a]+65)-(i%26))%26+65 ) ;
        if (a==input.size())
            cout << endl ;
    }
}
