//编写一个圆类Circle，要求有函数可以求两圆周长之和，有函数可以输出创建的圆对象的个数。
//（注意：这里说的函数，可以是成员函数，也可以是普通函数）
#include<iostream>
using namespace std;
class Circle
{
public:
	Circle()
	{
		cout<<"input   r:"<<endl;
		cin>>r;
		count++;
		cout<<"No."<<count<<endl;
	}
	void add(Circle &a)
	{
		float c;
		c=2*3.14*r+2*3.14*a.r;
		cout<<"C="<<c<<endl;
	}
private:
	float r;
	static int count;
};
int Circle ::count=0;
int main()
{
	class Circle a,b;
	a.add(b);
	return 0;
}

