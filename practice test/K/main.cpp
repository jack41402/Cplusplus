#include <iostream>

using namespace std;

int a[4] , b[4] , A=0 , B=0 ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0 ; i<4 ; ++i)
    {
        cin >> a[i] ;
    }
    for (int i=0 ; i<4 ; ++i)
    {
        cin >> b[i] ;
    }
    for (int i=0 ; i<4 ; ++i)
    {
        if (i==0) A += a[i]*5 , B += b[i]*5 ;
        if (i==1) A += a[i]*4 , B += b[i]*4 ;
        if (i==2) A += a[i]*3 , B += b[i]*3 ;
        if (i==3) A += a[i]*2 , B += b[i]*2 ;
    }
    if (B>A) cout << "StudentB\n" ;
    if (A==B) cout << "Tie\n" ;
    if (A>B) cout << "StudentA\n" ;
    return 0;
}
