#include <iostream>
#include <map>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int count=1 ;
    string str ;
    map <string , string> mp={{"HELLO" , "ENGLISH"} , {"HOLA" , "SPANISH"} ,
                              {"HALLO" , "GERMAN"} , {"BONJOUR" , "FRENCH"} ,
                              {"CIAO" , "ITALIAN"} , {"ZDRAVSTVUJTE" , "RUSSIAN"}} ;
    while (cin>>str)
    {
        if (str=="#") break ;
        cout << "Case " << count++ << ": " << ((mp[str]!="") ? mp[str] : "UNKNOWN") << '\n' ;
    }
    return 0;
}