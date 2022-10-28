#include <iostream>

using namespace std;

int main()
{
	long long int N , i , temp , a ;
	a = 1 ;
	temp = 0 ;
	cin >> N ;
	for (i=1 ; i<=N ; i=i+1)
	{
        a = a * 13 % 100;
	}
    temp = a / 10 ;
    temp = temp % 10 ;
	cout << temp << endl;
}
