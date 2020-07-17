//编写一个类CAL，计算出fact=1×2×3×……×n值。
//类中包含数据成员n、fact，成员函数包括初始化n的构造函数，求fact值的process函数，输出n、fact值的show函数。写出主函数，输入n的值，并输出结果。
#include<iostream>
using namespace std;
class CAL
{
public:
	CAL()
	{
		cout<<"1*2*3*4*...*n"<<endl;
		cout<<"putin :n:"<<endl;
		cin>>n;
	}
	void process()
	{
		this->fact=1;
		for(int i=1;i<=n;i++)
			fact=fact*i;
	}
	void show()
	{
		cout<<fact<<endl;
	}
private:
	int n;
	int fact;
};
int main()
{
	CAL f;
	f.process();
	f.show();
	return 0;
}