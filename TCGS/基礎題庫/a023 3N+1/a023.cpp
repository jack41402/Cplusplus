#include <iostream>

using namespace std;

int main()
{
    int N , i=1 ;
    cin >> N ;
    while (N>1)
    {
        if (N%2==1)
        {
            N=3*N+1 , i=i+1;
        }
        else if (N%2==0)
         {
            N=N/2 , i=i+1;
         }
    }
    if (N==1)
        cout << i << endl;
}
