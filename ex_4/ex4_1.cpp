//����һ��������Complex�����������"+"��ʹ֮�����ڸ����ļӷ����㡣�μ�������������������Զ��������Ҳ������һ����������˳�����⡣
//���������"++"������ʵ��ǰ�����ͺ�������Ҫ���ó�Ա��������Ԫ��������ʵ�ַ�������
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
