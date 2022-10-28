#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N , i , line , sum=0 ;
    cin >> N ;
    for (i=1 ; i<=N ; i++)
    {
        cin >> line ;
        sum += pow(2-line , 2) ;
    }
    cout << sum << endl ;
    return 0;
}
