#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    while (cin>>n)
    {
        int temp ;
        double avg=0 ;
        for (int i=0 ; i<n ; ++i)
        {
            cin >> temp ;
            avg += temp ;
        }
        (avg/n>59) ? cout << "no\n" : cout << "yes\n" ;
    }
    return 0;
}
