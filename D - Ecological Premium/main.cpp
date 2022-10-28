#include <iostream>

using namespace std;

int main()
{
    int N , animal , square , eco , sum , i , j , f ;
    cin >> N ;
    for (i=1 ; i<=N ; ++i)
    {
        cin >> f ;
        for (j=1 , sum=0 ; j<=f ; ++j)
        {
            cin >> square >> animal >> eco ;
            sum += square * eco ;
        }
        cout << sum << endl ;
    }
    return 0;
}
