#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int i , j , i1 , j1 ;
    bool c=0 ;
    string line , a , temp;
    stringstream data ;
    a = "BILL" ;
    for (i=0 ; i<3 ; i=i+1)
    {
        getline (cin , line) ;
        data.clear() ;
        data << line ;
        for (j=1 ;  ; j=j+1)
        {
            data >> temp ;
            if (data.fail())
            {
                break ;
            }
            if (temp==a)
            {
                c = 1 ;
                i1 = i + 1 ;
                j1 = j ;
                break ;
            }
        }
    }
    if (c==1)
    {
        cout << i1 << " " << j1 << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    return 0;
}
