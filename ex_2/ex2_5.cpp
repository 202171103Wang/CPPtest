//����һ�����࣬�ɹ��캯���������ݳ�Ա��ʼ��������һ����Ա������һ�㺯����ʵ�������֮��ľ��롣
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