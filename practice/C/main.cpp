#include <iostream>

using namespace std;

int main()
{
    int a , b , temp , sum ;
    sum = 0 ;
    cin >> a >> b ;
    for (int i=0 ; i<a ; ++i)
    {
        cin >> temp ;
        if (temp>=b)
        {
            sum++ ;
        }
    }
    cout << sum << '\n' ;
    return 0;
}
