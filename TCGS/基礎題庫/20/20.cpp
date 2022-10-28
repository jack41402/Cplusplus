#include <iostream>

using namespace std;

int main()
{
    int a , b , prize ;
    cin >> a >> b ;
    if (b==2||b==5||b==8) prize +=200;
    else if (a%2) prize +=100;
    else if (a==b) prize +=50;
    cout << prize << endl;
    return 0;
}
