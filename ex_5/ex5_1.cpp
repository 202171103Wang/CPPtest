//һ������һ����Point�ࡣ
//    1����Point�̳ж���һ��ԲCircle1�ࡣ���㲢���Բ�������
//    2������һ��ԲCircle2�࣬������Point�Ӷ��󡣼��㲢���Բ�������

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
