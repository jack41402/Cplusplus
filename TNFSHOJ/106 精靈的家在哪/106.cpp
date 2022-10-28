#include <iostream>

using namespace std;

int main()
{
    int i , j=2 ;
    for (i=1 ; j%71!=0 ; i=i+1)
    {
        j=j*2+1;
    }
    if (j%3==0)
        cout << "right" << endl;
    else if (j%3!=0)
        cout << "left" << endl;
    return 0;
}
