#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p=0;
	string a,b,answer="";
	cin>>a>>b;
	int k=a.length()-1,j=b.length()-1;
	while(k>=0&&j>=0)
	{
		answer+=((a[k]-'0')+(b[j]-'0')+p)%10+'0';
		p=((a[k--]-'0')+(b[j--]-'0')+p)/10;
	}
	while(k>=0)
	answer+=((a[k]-'0'+p)%10+'0'),p=(a[k--]+p)/10;
	while(j>=0)
	answer+=((b[j]-'0'+p)%10+'0'),p=(b[j--]+p)/10;
	for(int i=answer.length()-1;i>=0;i--)
	cout<<answer[i];
}
