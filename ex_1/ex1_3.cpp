//定义一个长方体类，其中数据成员包括length、width、height；
//成员函数有set(由键盘输入长宽高的值)、cal(计算长方体体积) 、show(输出长方体的体积)。
//然后编写一个主函数，求3个长方体的体积。
#include<iostream>
using namespace std;
class T
{
private:
	float length;
	float width;
	float height;
	float V;
public:
	void set()
	{
		cin>>length>>width>>height;
	}
	void cal()
	{
		
		V=length*width*height;
	}
	void show()
	{
		cout<<V<<endl;
	}
};
int main()
{
	class T v1,v2,v3;
	cout <<"输入三个长方体的长宽高"<<endl;
	v1.set();v1.cal();v1.show();
	v2.set();v2.cal();v2.show();
	v3.set();v3.cal();v3.show();
	return 0;
}
