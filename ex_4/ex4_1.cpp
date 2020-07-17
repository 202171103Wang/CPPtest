//定义一个复数类Complex，重载运算符"+"，使之能用于复数的加法运算。参加运算的两个运算量可以都是类对象，也可以有一个是整数，顺序任意。
//重载运算符"++"，可以实现前增量和后增量（要求用成员函数和友元函数二种实现方法）。
#include<iostream>
using namespace std;
class complex
{
public:
	complex(int real=0,int imag=0)
	{
		i=real;
		j=imag;
	}
	complex operator+(complex &a)
	{
		complex c;
		c.i=i+a.i;
		c.j=j+a.j;
		return c;
	}
	friend complex & operator++(complex &a);
	complex operator++(int n)
	{
		complex t;
		t=*this;
		i+=1;j+=1;
		return t;
	}
	void show()
	{
		cout<<i<<"+"<<j<<"i"<<endl;
	}
private:
	int i,j;
};
 complex & operator++(complex &a)
 {
	 a.i+=1;
	 a.j+=1;
	 return a;
 }
int main()
{
	complex a,b(1,2);
	a.show();b.show();
	(a+b).show();
	(a++).show();
	(++a).show();
}
