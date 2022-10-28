#include <iostream>

using namespace std;

int main()
{
    int A , N , i ;
    cin >> A >> N ;
    for (i=1 ; i<=N ; i=i+1)
    {
        A = A * 7 ;
        if (A>=100)
        {
            A = A - A / 100 * 100 ;
        }
        A = A % 10 * 10 + A / 10 ;
    }
    cout << A << endl ;
    return 0;
}
