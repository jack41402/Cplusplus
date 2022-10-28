#include <iostream>

using namespace std;

int main ()
{
	int N , R , a , b ;
	cin >> N >> R ;
	b=N ;
	for (a=N;a>b-R+1;a=a-1)
	{
		N=N*(a-1);
	}
	cout <<  N << endl;
}
