#include <iostream>

using namespace std;

int main()
{
    int i , N , S ;
    cin >> N ;
    S = 0;
    for (i=1 ; i*i<=N ; i=i+1)
    {
        if (N%i==0 && N/i!=i)
        {
            S=S+i+N/i;
        }
        else if (N%i==0 && N/i==i)
        {
            S=S+i;
        }
    }
    S=S-N;
    if (S>N)
    {
        cout << "Abundant" << endl ;
    }
    else if (S==N)
    {
        cout << "Perfect" << endl ;
    }
    else if (S<N)
    {
        cout << "Deficient" << endl ;
    }
    return 0;
}
