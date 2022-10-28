#include <iostream>

using namespace std;

long long int Y=0 , T=0 , P=0 ;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp ;
    while (cin>>temp)
    {
        for (int i=0 ; i<temp.size() ; ++i)
        {
            if (temp[i]=='Y' || temp[i]=='y') Y++ ;
            if (temp[i]=='T' || temp[i]=='t') T++ ;
            if (temp[i]=='P' || temp[i]=='p') P++ ;
        }
    }
    long long int ans ;
    ans = min(Y , min(T , P)) ;
    cout << ans << '\n' ;
    return 0;
}
