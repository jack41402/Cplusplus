#include <iostream>

using namespace std;

int main()
{
    int K ;
    cin >> K ;
    if (K==3||K==4||K==5)
        cout << "Spring!" << endl;
    else if (K==6||K==7||K==8)
        cout << "Summer!" << endl;
    else if (K==9||K==10||K==11)
        cout << "Autumn!" << endl;
    else if (K==12||K==1||K==2)
        cout << "Winter!" << endl;
    return 0;
}
