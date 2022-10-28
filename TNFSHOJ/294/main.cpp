#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a , b ;
    getline(cin , a) ;
    getline(cin , b) ;
    string A , B ;
    A=a , B=b ;
    transform(A.begin(), A.end() ,A.begin() , ::toupper);
    transform(B.begin(), B.end() ,B.begin() , ::toupper);
    if ((A=="JILL" && B=="XIPLUS") || (A=="XIPLUS" && B=="JILL"))
    {
        cout << "Hello, Sister!\nHi, Sister!\n" ;
    }
    else cout << "Hello, " << b << "!\nHi, " << a << "!\n" ;
    return 0;
}
