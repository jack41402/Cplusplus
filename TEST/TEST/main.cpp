class A
{
private:
	static int m_nNum=0 ;//宣告 static member variable
public:
	static int GetNum(){ return m_nNum; }//宣告 static member function
};


int main()
{
	//沒有產生物件也可使用
	cout<<A::GetNum()<<endl;

	system("pause");
	return 0;
}