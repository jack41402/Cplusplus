#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i ;
    string N ;
    cin >> N ;
    for (i=N.size()-1 ; i>=0 ; i=i-1)
    {
        cout << N[i] ;
    }
    cout << endl ;
    return 0;
}
