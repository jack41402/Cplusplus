#include <iostream>

using namespace std;

int main()
{
    int N , i , j ;
    bool c ;
    cin >> N ;
    string t[2] ;
    cin >> t[0] >> t[1] ;
    for (i=0 , c=1 ; i<N ; i++)
    {
        if (t[0][i]=='0')
        {
            if(i==0)
            {
                if (t[1][i]!='1' || t[1][i+1]!='1')
                {
                    c = 0 ;
                    break ;
                }
            }
            else if (i==N-1)
            {
                if (t[1][i]!='1' || t[1][i-1]!='1')
                {
                    c = 0 ;
                    break ;
                }
            }
            else
            {
                if (t[1][i-1]!='1' || t[1][i]!='1' || t[1][i+1]!='1')
                {
                    c = 0 ;
                    break ;
                }
            }
        }
    }
    if (c==1)
    {
        cout << "FENDED OFF!" << endl ;
    }
    else if (c==0)
    {
        cout << "FENESTRATION FORTIFICATION FAILURE!" << endl ;
    }
    return 0;
}
