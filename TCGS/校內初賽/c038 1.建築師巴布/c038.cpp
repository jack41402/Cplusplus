#include <iostream>

using namespace std;

int main()
{
    int M , D , L ;
    cin >> M >> D >> L ;
    D = D + L ;
    while (true)
    {
        if (M==2)
        {
            if (D-28<=0)
            {
                break ;
            }
            D = D - 28 ;
            M = M + 1 ;
        }
        else if (M==4 || M==6 || M==9 || M==11)
        {
            if (D-30<=0)
            {
                break ;
            }
            D = D - 30 ;
            M = M + 1 ;
        }
        else if (M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==11 || M==12)
        {
            if (D-31<=0)
            {
                break ;
            }
            D = D - 31 ;
            M = M + 1 ;
        }
    }
    if (M<=8 && D<=30)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    return 0;
}
