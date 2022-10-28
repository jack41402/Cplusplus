#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k , count , prev , i , j ;
    k = 0 ;
    count = 0 ;
    prev = -1 ;
    string N , M ;
    cin >> N >> M ;
    for (i=0 ; i<N.size() ; i=i+1)
    {
        for (j=0 ; j<M.size() ; j=j+1)
            if (N[i]==M[j] && prev<j)
            {
                count = count + 1 ;
                prev = j ;
                break ;
            }
    }
    if (count==N.size())
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
}
