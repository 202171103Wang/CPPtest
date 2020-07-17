//一、定义一个点Point类。
//    1）由Point继承定义一个圆Circle1类。计算并输出圆的面积。
//    2）定义一个圆Circle2类，其中有Point子对象。计算并输出圆的面积。

#include<iostream>
using namespace std;
class point
{
public:
	point(double a=0,double b=0)
	{
		x=a;
		y=b;
	}
protected:
	double x,y;
};
class circle1:public point
{
public:
	circle1(double a,double b,double c):point(a,b),r(c){}
	double S()
	{
		return 3.14*r*r;
	}
protected:
	double r;
};
class circle2
{
public:
	circle2(double a,double b, double i):p(a,b),R(i){}
	double S()
	{
		return 3.14*R*R;
	}
protected:
	double R;
	point p;
};
int main()
{
	circle1 a(1,1,3);
	cout<<a.S()<<endl;
	circle2 b(1,1,1);
	cout<<b.S()<<endl;
	return 0;
}
