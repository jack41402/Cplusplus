#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , Q , a , b , i ;
    cin >> N ;
    long long int arr[N]={0} , sum=0 , form[N] ;
    for (i=0 ; i<N ; i++)
    {
        cin >> arr[i] ;
        sum += arr[i] ;
        form[i] = sum ;
    }
    cin >> Q ;
    for (i=1 ; i<=Q ; i++)
    {
        cin >> a >> b ;
        sum = 0 ;
        if (a==1)
        {
            sum = form[b-1] ;
        }
        else if (b==1)
        {
            sum = form[a-1] ;
        }
        else
        {
            if (b>a)
            {
                sum = form[b-1] - form[a-2] ;
            }
            else
            {
                sum = form[a-1] - form[b-2] ;
            }
        }
        cout << sum << endl ;
    }
    return 0;
}
