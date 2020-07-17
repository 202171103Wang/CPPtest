//有两个矩阵a和b，均为3行5列。求两个矩阵之和。
//重载插入运算符"+"，使之能用于矩阵相加，重载插入运算符"<<"和流提取运算符">>"，使之能用于该矩阵的输入与输出。
#include<iostream>
using namespace std;
class J
{
public:
	friend istream &operator>>(istream&in,J&a);
	friend ostream &operator<<(ostream&out,J&a);
	J operator+(J a)
	{
		J c;
		for(int i=0;i<3;i++)
		for(int j=0;j<5;j++)
			c.data[i][j]=data[i][j]+a.data[i][j];
		return c;
	}
private:
	int data[3][5];
};
istream &operator>>(istream&in,J&a)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<5;j++)
			in>>a.data[i][j];
		return in;
}
ostream &operator<<(ostream&out,J&a)
{	
	for(int i=0;i<3;i++)
		for(int j=0;j<5;j++)
			out<<a.data[i][j]<<" ";
		return out;
}
int main()
{
	J a,b;
	cin>>a;
	cin>>b;
	cout<<a+b<<endl;
	return 0;
}
