#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> jack , vicent ;
long long int sjack=0 , svicent=0 ;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , a , b , c ;
    cin >> n ;
    while (n--)
    {
        cin >> a >> b >> c ;
        jack.push(a) , vicent.push(b) ;
        if (c==1)
        {
            a = vicent.top() ;
            vicent.pop() ;
            b = jack.top() ;
            jack.pop() ;
            jack.push(a) ;
            sjack += a ;
            vicent.push(b) ;
            svicent += b  ;
        }
    }
    cout << sjack << ' ' << svicent << '\n' ;
    return 0;
}
