#include <iostream>
using namespace std;

int main()
{
	int a ;
	cin >> a ;
	while (a%2==0)
	{
		a/=2 ;
		if (a%2==1)
			cout << a << endl;
	}
	return 0;
}