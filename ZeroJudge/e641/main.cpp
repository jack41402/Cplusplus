#include <iostream>
#include <map>

using namespace std;

int main ()
{
    string str ;
    map <char , int> soundex={{'B' , 1} , {'F' , 1} , {'P' , 1} , {'V' , 1} ,
                              {'C' , 2} , {'G' , 2} , {'J' , 2} , {'K' , 2} ,
                              {'Q' , 2} , {'S' , 2} , {'X' , 2} , {'Z' , 2} ,
                              {'D' , 3} , {'T' , 3} , {'L' , 4} , {'M' , 5} ,
                              {'N' , 5} , {'R' , 6}} ;
    while (cin>>str)
    {
        if (soundex[str[0]]!=0)cout << soundex[str[0]] ;
        for (int i=1 ; i<str.size() ; ++i)
        {
            if (soundex[str[i]]==soundex[str[i-1]] || soundex[str[i]]==0) continue ;
            cout << soundex[str[i]] ;
        }
        cout << '\n' ;
    }
    return 0;
}