//����������a��b����Ϊ3��5�С�����������֮�͡�
//���ز��������"+"��ʹ֮�����ھ�����ӣ����ز��������"<<"������ȡ�����">>"��ʹ֮�����ڸþ���������������
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
