#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N , i , a ;
    string S ;
    while (cin>>N)
	{
		getchar() ;
		getline (cin,S) ;
		i = 0 ;
		while (i<N)
		{
			for (a=i;a<S.size();a=a+N)
			cout << S[a] ;
			i=i+1 ;
		}
		cout << endl ;
	}
}
