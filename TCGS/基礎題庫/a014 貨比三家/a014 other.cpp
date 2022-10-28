#include<cmath>
#include<iostream>
using namespace std;
int min_value(int a,int b,int c)
{
    return min(min(a,b),c);
}

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    cout<<min_value(a,b,c)<<endl;
}
