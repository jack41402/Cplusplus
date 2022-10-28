#include <iostream>
using namespace std;

int main()
{
	int N , M , i=0 ;
	cin >> N >> M ;
	while (N<M)
	{
		N=N*3 , i=i+1;
	}
	cout << i << endl;
}
