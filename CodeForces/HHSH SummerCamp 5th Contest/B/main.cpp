#include <iostream>

using namespace std;

int arr[100005] ;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , k ;
    long long int sum=0 ;
    cin >> n >> k ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> arr[i] ;
        sum += arr[i] ;
    }
    sum *= k/n ;
    for (int i=0 ; i<k%n ; ++i)
    {
        sum += arr[i] ;
    }
    cout << sum << '\n' ;
    return 0;
}
