#include <iostream>

using namespace std;

int main()
{
    int i , A=0 , B=0 , C=0 , ult=0 ;
    string skill ;
    cin >> skill ;
    for (i=0 ; i<skill.size() ; i++)
    {
        if (skill[i]=='A')
        {
            A++ ;
        }
        else if (skill[i]=='B')
        {
            B++ ;
        }
        else if (skill[i]=='C')
        {
            C++ ;
        }
        else if (skill[i]=='X' && A>=3 && B>=2 && C>=1)
        {
            ult++ ;
            A = 0 ;
            B = 0 ;
            C = 0 ;
        }
        else
        {
            A = 0 ;
            B = 0 ;
            C = 0 ;
        }
    }
    cout << ult << endl ;
    return 0;
}
