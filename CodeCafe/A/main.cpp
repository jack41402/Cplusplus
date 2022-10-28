#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , Q , i , a , S=0 ;
    cin >> N ;
    bool arr[N]={0} ;
    cin >> Q ;
    for (i=0 ; i<Q ; i++)
    {
        cin >> a ;
        if (arr[a-1]==1)
        {
            if (S==N)
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
            continue ;
        }
        else if (arr[a-1]==0)
        {
            arr[a-1] = 1 ;
            S++ ;
            if (S==N)
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
        }
    }
    return 0;
}
