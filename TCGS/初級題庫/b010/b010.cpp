#include <iostream>
#include <string>

using namespace std;

int main()
{
    int array[10];
    int  a ;
    string input ;
    cin >> input;
    for (a=0 ; a<input.size() ; a=a+1)
    {
        cout << (char)(((input[a]+65)-(2%26))%26+65 ) ;
        if (a==input.size())
            cout << endl ;
    }
}
