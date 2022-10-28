#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , n , a ,  i , j , k ;
    cin >> n ;
    for (a=1 ; a<=n ; a=a+1)
    {
        cin >> N ;
        for (i=1 ; i<=N ; i=i+1)
        {
            for (j=1 ; j<=N-i ; j=j+1 )
            {
                cout << " " ;
            }
            for (j=1 , k=65+N-1 ; j<=2*i-1 ; j=j+1)
            {
                if(j<i)
                cout << (char)k-- ;//cout << (char)k ,k++
                else
                cout<<(char)k++ ; //cout << (char)k ,k--
            }
            cout << "\n" ;
        }
        for(i=N-1 ; i>=1 ; i=i-1)
        {
            for(j=1 ; j<=N-i ; j=j+1)
            {
                cout << " ";
            }
            for (j=1 , k=65+N-1 ; j<=2*i-1 ; j=j+1)
            {
                if(j<i)
                cout << (char)k-- ;//cout << (char)k ,k++
                else
                cout<<(char)k++ ; //cout << (char)k ,k--
            }
            cout << "\n" ;
        }
    }
    return 0;
}
