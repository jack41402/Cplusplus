#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int N , M , temp=0 ;
    bool c=0 ;
    cin >> N >> M ;
    long long int arr[N] ;
    for (int i=0 ; i<N ; ++i)
    {
        cin >> arr[i] ;
    }
    sort(arr , arr+N) ;
    for (int i=1 ; i<N-1 ; ++i)
    {
        if (arr[i]==M)
        {
            c = 1 ;
            temp = i ;
            break ;
        }
    }
    if (c==1)
    {
        cout << "Yes\n" ;
        cout << arr[temp-1] << ' ' << arr[temp] << ' ' << arr[temp+1] << '\n' ;
    }
    else
    {
        cout << "No\n" ;
    }
    return 0;
}
