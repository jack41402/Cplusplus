#include <iostream>
using namespace std;

int main()
{
	string a , b ;
	string teadream , teareal ;
	cin >> teadream >> a ;
	cin >> teareal >> b ;
    if (teadream==teareal && a==b)
    	cout << "GOOD" << endl;
    else if (teadream==teareal || a==b)
    	cout << "=~=" << endl;
    else 
    	cout << "OTZ" << endl;
    return 0;
}