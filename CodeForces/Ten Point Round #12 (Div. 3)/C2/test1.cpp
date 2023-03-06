#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string a , b ;
    long long int number , ans ;
    stringstream ss ;
    cin >> a >> b ;
    ss << (a+b) ;
    ss >> number ;
    ans = number * 1234 ;
    cout << ans << '\n' ;
}