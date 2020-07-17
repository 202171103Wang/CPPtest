//数据的初始化用构造函数实现
//定义一个长方体类，
//其中数据成员包括length、width、height；
//成员函数有set(由键盘输入长宽高的值)、cal(计算长方体体积) 、show(输出长方体的体积)。
//然后编写一个主函数，求3个长方体的体积。
#include<iostream>
using namespace std;
class V
{
public:
	V()
	{
		cout<<"putin length,width,height"<<endl;
		cin>>length>>width>>height;
	}
	void cal()
	{
		v=length*width*height;
	}
	void show()
	{
		cout<<v<<endl;
	}
private:
	float length,width,height,v;
};
int main()
{
	class V v1,v2,v3;
	v1.cal();v1.show();
	v2.cal();v2.show();
	v3.cal();v3.show();
	return 0;
}
