//声明一个素数类Prime，可以求出给定范围的素数。写出主函数，输入数据范围，显示该数据范围内的所有素数。
#include<iostream>
using namespace std;
class Prime
{
private:
	int m;
	int n;
	int x;
public:
	void  input()
	{
		cout<<"输入范围"<<endl;
		cin>>n>>m;
	}
	void output()
	{
		if(n>m)
			cout<<"error"<<endl;
		else
		for(x=n;x<=m;x++)
		{
			for(int i=2;i<=x;i++)
				if(x%i==0)
				{
					
					break;
				}
				if(i==x)
					cout<<x<<" ";
		}
	}
};

int main()
{
	class Prime P;
	P.input();
	P.output();
	return 0;
}
