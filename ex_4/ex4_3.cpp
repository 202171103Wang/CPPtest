//如果矩阵的行数和列数不固定，实现上题的功能。
#include<iostream>
using namespace std;
class J
{
public:
	J(int H=0,int L=0)
	{
		h=H;
		l=L;
	}
	friend istream &operator>>(istream&in,J&a);
	friend ostream &operator<<(ostream&out,J&a);
	J  operator+(J a)
	{
		J t;
		t.h=a.h;t.l=a.l;
		for(int i=0;i<a.h;i++)
			for(int j=0;j<a.l;j++)
				t.data[i][j]=data[i][j]+a.data[i][j];
		return t;
	}
private:
	int data[100][100];
	int h,l;
};
istream &operator>>(istream&in,J&a)
{
	for(int i=0;i<a.h;i++)
		for(int j=0;j<a.l;j++)
			in>>a.data[i][j];
		return in;
}
ostream &operator<<(ostream&out,J&a)
{	
	for(int i=0;i<a.h;i++)
		for(int j=0;j<a.l;j++)
			out<<a.data[i][j]<<"  ";
	return out;
}
int main()
{
	J a(2,2),b(2,2);
	cin>>a;
	cin>>b;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<a+b<<endl;
	return 0;
}