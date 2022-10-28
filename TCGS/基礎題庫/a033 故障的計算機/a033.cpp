#include <iostream>

using namespace std;

int main()
{
    int i , j ;
    string N ;
    cin >> N ;
    cout << "|____" ;
    if (N.size()<5)
    {
        for (j=4-N.size() ; j>0 ; j=j-1)
        {
            cout << "_" ;
        }
        for (i=0 ; i<N.size() ; i=i+1)
        {
            cout << N[i];
        }
    }
    else
    {
        for (i=N.size()-4 ; i<N.size() ; i=i+1)
        {
            cout << N[i];
        }
    }
    cout << "|" <<endl;
    return 0;
}
