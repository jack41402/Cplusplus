#include <iostream>
#include <algorithm>

using namespace std;

unsigned long long int arr[15]={0} ;

void find ()
{
    for (unsigned long long int i=1 , ans ; i*i<10000000000 ; ++i)
    {
        ans = i*i ;
        bool c=1 ;
        int cnt=0 ;
        while (ans)
        {
            if (ans&1)
            {
                c = 0;
                break;
            }
            ans /= 10 ;
            ++cnt ;
        }
        if (c==1 && arr[cnt]==0)  arr[cnt] = i*i ;
    }
}

int main()
{
    find() ;
    int n , k ;
    cin >> n ;
    while (n--)
    {
        cin >> k ;
        cout << arr[k] ;
    }
    return 0;
}
