#include <iostream>

using namespace std;

int cost[2]={32 , 55} ;

int main()
{
    int n , m , k , minutes=0 ;
    cin >> n >> m >> k ;
    if (n<cost[k]) cout << "Wayne can't eat and drink.\n" ;
    while(n>=cost[k])
    {
        cout << minutes << ": Wayne " ;
        (k==0) ? cout << "eats an Apple pie, " : cout << "drinks a Corn soup, " ;
        n -= cost[k] ;
        if (n==0) cout << "and now he doesn't have money.\n" ;
        else (n==1) ? cout << "and now he has 1 dollar.\n" : cout << "and now he has " << n << " dollars.\n" ;
        minutes += m ;
        k = 1 - k ;
    }
    return 0;
}
