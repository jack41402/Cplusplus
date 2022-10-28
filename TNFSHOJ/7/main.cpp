#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , i , j , num ;
    cin >> N ;
    for (i=0 ; i<N ; i++)
    {
        cin >> num ;
        int arr[num+1]={0} ;
        for (j=0 ; j<num+1 ; j++)
        {
            cin >> arr[j] ;
        }
        if (num==0)
        {
            cout << 0 << endl ;
        }
        else if (num==1)
        {
            cout << arr[1] - arr[0] << endl ;
        }
        else
        {
            cout << ((arr[3]-arr[2])-(arr[2]-arr[1]))-((arr[2]-arr[1])-(arr[1]-arr[0])) ;
        }
    }
    return 0;
}
