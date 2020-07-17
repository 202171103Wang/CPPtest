//将上题中的基类Shape设计成抽象类，以使求面积操作更趋合理合法。
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class shape
{
public:
	shape(double xx=0,double yy=0):x1(xx),y1(yy){}
	double show_s(){return 0;}
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