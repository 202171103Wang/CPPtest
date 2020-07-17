//数据的初始化用构造函数实现
//声明一个素数类Prime，可以求出给定范围的素数。写出主函数，输入数据范围，显示该数据范围内的所有素数。
#include<iostream>
using namespace std;
class Prime
{
public:
	Prime()
	{
		cout<<"putin n m  !(n<=m)"<<endl;
		cin>>n>>m;
	}
	void out()
	{
		for(int x=n;x<=m;x++)
		{
			for(int i=2;i<=x;i++)
				if(x%i==0)
					break;
				if(i==x)
					cout<<x<<" ";
		}
	}
private:
	int n,m;
};
int main()
{
	Prime p;
	p.out();
	return 0;
}