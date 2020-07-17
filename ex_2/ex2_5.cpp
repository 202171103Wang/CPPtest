//定义一个点类，由构造函数进行数据成员初始化，定义一个成员函数或一般函数，实现求二点之间的距离。
#include<iostream>
#include<math.h>
using namespace std;
class point
{

public:
	point()
	{
		cout<<"putin a point:"<<endl;
		cin>>x>>y;
	}
	float putx()
	{
		return x;
	}
	float puty()
	{
		return y;
	}
private:
	float x,y;
};
float len(point a,point b)
{
	float l;
	l=sqrt((a.putx()-b.putx())*(a.putx()-b.putx())+(a.puty()-b.puty())*(a.puty()-b.puty()));
	return l;
}
int main()
{
	point a,b;
	float ln;
	ln=len(a,b);
	cout<<ln;
	return 0;
}