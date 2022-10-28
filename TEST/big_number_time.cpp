#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef struct 
{
	vector<int> number;
	char symbol;
} big_number;
big_number rms(big_number &data)
{
	while(1&&data.number.empty()==false)
	{
		if(data.number[0]==0)
		data.number.erase(data.number.begin());
		else
		break;
	}
	if(data.number.empty()==true)
	data.number.push_back(0);
	return data;
}
void input(big_number &temp,string data)
{
	
	if(data[0]=='-')
	temp.symbol='-';
	else
	temp.symbol='+';
	for(int i=(data[0]=='-');i<data.length();i++)
	temp.number.push_back((int)(data[i]-'0'));
	rms(temp);
}
void print(big_number &temp)
{
	if(temp.symbol=='-')
	cout<<'-';
	for(int i=0;i<temp.number.size();i++)
	cout<<temp.number[i];
	cout<<endl;
}
big_number compare(big_number &data,int len)
{
	//cout<<"comparedata=",print(data),cout<<endl;
	int k=len-data.number.size();
	for(int i=0;i<data.number.size();i++)
	data.number[i]=9-data.number[i];
	data.number[data.number.size()-1]++;
	for(int i=data.number.size()-1;i>0;i--)
	data.number[i-1]+=data.number[i]/10,data.number[i]%=10;
	for(int i=1;i<=k;i++)
	data.number.insert(data.number.begin(),9);
	return rms(data);
}
big_number add_minus(big_number &data1,big_number &data2,char symbol)
{
	int len=max(data1.number.size(),data2.number.size());
	bool check=1;//1=正數 
	big_number answer;
	if((symbol=='-'&&data2.symbol=='+'&&data1.symbol=='+')||(symbol=='+'&&data2.symbol=='-'&&data1.symbol=='+'))//正加負 //正減正 
	check=0,compare(data2,len);
	else if(symbol=='+'&&data2.symbol=='+'&&data1.symbol=='-')//負加正 
	{
	return add_minus(data2,data1,'+');	
	}else if(symbol=='-'&&data2.symbol=='-'&&data1.symbol=='-')
	{
		data2.symbol='+';
		return add_minus(data2,data1,'+');
	}
	string temp; 
	int k=data1.number.size()-1,j=data2.number.size()-1,b=0;
	while(k>=0&&j>=0)
	{
		temp=(char)((data1.number[k]+data2.number[j]+b)%10+'0')+temp;
		b=(data1.number[k--]+data2.number[j--]+b)/10;
	}
	while(k>=0)
	{
		temp=(char)((data1.number[k]+b)%10+'0')+temp;
		b=(data1.number[k--]+b)/10;
	}
	while(j>=0)
	{
		temp=(char)(data2.number[j]+b%10+'0')+temp;
		b=(data2.number[j--]+b)/10;
	}
	if(b!=0)
	temp=(char)(b+'0')+temp;
	
	//cout<<endl<<temp<<endl;
	
	
	if(temp.length()>len&&check==0)
	{
	temp[0]='0';
	//cout<<temp<<endl;
	input(answer,temp);
	return rms(answer);
	}
	else if(check==0)
	{
		input(answer,temp);
		compare(answer,len);
		answer.symbol='-';
		//print(answer);
		return answer;
	}else
	{
		input(answer,temp);
		if((symbol=='+'&&data2.symbol=='-'&&data1.symbol=='-')||(symbol=='-'&&data2.symbol=='+'&&data1.symbol=='-'))
		answer.symbol='-';
		return answer;
	}
	
}
big_number times(big_number &data1,big_number &data2)
{
	big_number answer;
	input(answer,"0");
	for(int i=data2.number.size()-1;i>=0;i--)
	{
		int b=0;
		string temp;
		big_number by_add;
		for(int k=data1.number.size()-1;k>=0;k--)
		{
			temp=(char)((data1.number[k]*data2.number[i]+b)%10+'0')+temp;
			b=(data1.number[k]*data2.number[i]+b)/10;
		}
		for(int k=1;k<data2.number.size()-i;k++)
		temp+="0";
		input(by_add,temp);
		//print(by_add),cout<<endl;
		answer=add_minus(answer,by_add,'+');
	}
	if(data1.symbol!=data2.symbol)
	answer.symbol='-';
	return answer;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	char symbol;
	string in1,in2;
	big_number data1,data2,answer;
	cin>>in1>>symbol>>in2;
	input(data1,in1);input(data2,in2);
	if(symbol=='+'||symbol=='-')
	answer=add_minus(data1,data2,symbol);
	else if(symbol=='*')
	answer=times(data1,data2);	
	print(answer);
	}
}
