#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , c=0 ;
    cin >> n ;
    for (int i=1 ; i<=6 ; ++i)
    {
        for (int j=1 ; j<=6 ; ++j)
        {
            for (int k=1 ; k<=6 ; ++k)
            {
                if (n==(i+j+k))
                {
                    c++ ;
                }
            }
        }
    }
    cout << c << '\n' ;
    return 0;
}
