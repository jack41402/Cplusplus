#include <iostream>
#include <cmath>

using namespace std;

int press(int a , int b)
{
    unsigned int psum=0 , temp;
    temp = abs(a-b) ;
    while(true)
    {
        if (temp>=5)
        {
            temp -= 5 ;
            psum++ ;
        }
        else if (temp<5 && temp>=2)
        {
            temp -= 2 ;
            psum++ ;
        }
        else if (temp<2 && temp>0)
        {
            temp-- ;
            psum ++ ;
        }
        if (temp==0)
        {
            break ;
        }
    }
    return psum ;
}

int main()
{
    unsigned int T , i , a , b ;
    cin >> T ;
    for (i=1 ; i<=T ; i++)
    {
        cin >> a >> b ;
        cout << press(a , b) << endl ;
    }
    return 0;
}
