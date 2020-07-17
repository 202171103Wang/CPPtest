/*定义一个具有多态性的基类Shape，继承以下一些类：圆Circle类（坐标点和半径构成）、长方形Rectangle类（两个不重合的坐标点构成），三角形Triangle类（三个互不重合的坐标点构成）。定义一些操作，特别是定义求面积操作。
主程序中可以循环输入字符'C'、'R'、'R'来创建各类对象放在Shape指针数组中，以输入'X'结束循环。
输入'C'，则输入圆的数据：x坐标、y坐标、圆半径，创建圆对象
输入'R'，则输入长方形数据：x1、 y1、 x2、 y2坐标，创建长方形对象
输入'T'，则输入三角形数据：x1、 y1、 x2、 y2、x3、 y3坐标，创建三角形对象
输入'X'，表示输入结束。
最后循环处理数组中的每个元素，输出其面积。
*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class shape
{
public:
	shape(double xx=0,double yy=0):x1(xx),y1(yy){}
protected:
	double x1,y1;
};
class circle:public shape
{
public:
	circle(double a=0,double b=0,double c=0):shape(a,b),r(c){}
	void show_s()
	{
		cout<<"S="<<3.14*r*r<<endl;
	}
protected:
	double r;
};
class Rectangle:public circle
{
public:
	Rectangle(double a=0,double b=0,double c=0,double d=0):
	  circle(a,b,0),x2(c),y2(d){}
	void show_s()
	{
		double xx,yy;
		xx=fabs(x1-x2);
		yy=fabs(y1-y2);
		cout<<"S="<<xx*yy<<endl;
	}
protected:
	int x2,y2;
};
class Triangle:public Rectangle
{
public:
	Triangle(double a=0,double b=0,double c=0,double d=0,double e=0,double f=0):
	  Rectangle(a,b,c,d),x3(e),y3(f){}
	  void show_s()
	  {
		  double a,b,c,s;
		  a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		  b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		  c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		  s=(1.0/4)*sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
		  cout<<"S="<<s<<endl;
	  }
protected:
	int x3,y3;
};

int main()
{
	double a,b,c,d,e,f;
	string x;
	cout<<"input :C or R or T or X"<<endl;
	cin>>x;
	while(x!="X")
	{
		if(x=="C")
		{
			cout<<"input:a,b,c"<<endl;
	    	cin>>a>>b>>c;
	     	circle s(a,b,c);
	    	s.show_s();
		}
    	if(x=="R")
		{
			cout<<"input:a,b,c,d"<<endl;
	    	cin>>a>>b>>c>>d;
	    	Rectangle t(a,b,c,d);
	    	t.show_s();
		}
	    if(x=="T")
		{
			cout<<"input:a,b,c,d,e,f"<<endl;
    		cin>>a>>b>>c>>d>>e>>f;
	    	Triangle q(a,b,c,d,e,f);
	    	q.show_s();
		}
		cin>>x;
	}
	return 0;
}