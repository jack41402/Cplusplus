#include <iostream>
#include <cmath>

using namespace std;

int check(int b , string N)
{
    int i , temp , sum=0 , power , ans=0 , k=1 ;
    power = N.size() ;
    for (i=N.size()-1 ; i>=0 ; --i)
    {
        ans += (N[i]-'0') * k ;
        k *= b ;
    }
    for (i=N.size()-1 ; i>=0 ; --i)
    {
        temp = N[i] - '0' ;
        sum += (int)(0.1 + pow((double)temp , power)) ;
    }
    if (sum==ans)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int b , c ;
    string N ;
    cin >> b >> N ;
    c = check (b , N) ;
    if (c==1)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    return 0;
}
