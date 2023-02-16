#include <iostream>

using namespace std;

int main()
{
    int en , math , sci ;
    double dat , program , line , score , sum ;
    cin >> en >> math >> sci >> dat >> program >> line ;
    score = 20*((en*1.25)+(math*2)+(sci*1))/(15*4.25) ;
    sum = score + dat*0.4  +program*0.4 ;
    if (sum>=line) cout << "YA\n" ;
    else cout << "QQ\n" ;
    return 0;
}
