#include <iostream>

using namespace std;

int main()
{
    int N , i , j , k , m;
    cin >> N ;
    int a[N] ;
    for (i=0 ; i<N ; i=i+1)
    {
        cin >> a[i] ;
    }
    int mx=0 ;
	int ans=0 ;
	for (i=0 ; i<N ; i++)
    {
		int temp=0 ;
		for (j=0 ; j<N ; j++)
		{
			if (a[i]==a[j])
			{
				temp++ ;
			}
		}
		if(mx<temp){
			ans = a[i];
			mx = temp;
		}
	}
    cout << ans << " " << mx << endl ;
    return 0;
}
