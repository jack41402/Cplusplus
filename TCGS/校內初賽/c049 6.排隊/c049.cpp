#include <iostream>

using namespace std;

int main()
{
    int N , i , j , k , l ;
    cin >> N ;
    int H[N]={0} , A[N] , B[N] ;
    for (i=0 ; i<N-1 ; i=i+1)
    {
        cin >> A[i] >> B[i] ;
    }
    H[0] = A[0] % 997 ;
    for (i=1 , j=1 , k=1 , l=1 ; i<N ; i=i+1 , j=j+1)
    {
        if (j%2==1)
        {
            H[i] = (H[i-1]*7 + B[i-l]) % 997 ;
            l=l+1 ;
        }
        else if (j%2==0)
        {
            if (A[i-k]!=B[i-l-1])
                {
                    H[i] = (H[i-1]*7 + A[i-k]) % 997 ;
                    k=k+1 ;
                }
        }
    }
    cout << H[N-1] << endl ;
    return 0;
}
