#include <iostream>

using namespace std;

int crystal[5]={0} ;

int main ()
{
    ios::sync_with_stdio (false);
    cin.tie (nullptr);
    long long int x , y , z , n , k , a , b;
    cin>>x>>y>>z;
    cin>>n;
    while (n--)
    {
        cin>>k>>a>>b;
        if (k==1 && a<b) crystal[1]++;
        if (k==2 && a==b) crystal[2]++;
        if (k==3 && a>b) crystal[3]++;
    }
    if (crystal[1]>=x && crystal[2]>=y && crystal[3]>=z)
    {
        cout << "enough\n" ;
    }
    else
    {
        cout << "not enough\n" ;
    }
    return 0;
}
