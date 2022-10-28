#include <iostream>

using namespace std;

int main()
{
    int N , M , i , j ;
    cin >> N ;
    int A[N] , B[N] ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> A[i] >> B[i] ;
    }
    cin >> M ;
    int C[M] , D[M] , S[M]={0} ;
    for (i=0 ; i<M ; i=i+1)
    {
        cin >> C[i] >> D[i] ;
        for (j=0 ; j<N ; j=j+1)
        {
            if (A[j]==C[i])
            {
                S[i] = A[j] * B[j] ;
                if (S[i]==D[i])
                {
                    cout << "The shopkeeper is honest." << endl ;
                }
                else if (S[i]<D[i])
                {
                    cout << D[i]-S[i] << endl ;
                }
            }
        }
    }
    return 0;
}
