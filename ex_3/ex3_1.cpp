//��дһ��Բ��Circle��Ҫ���к�����������Բ�ܳ�֮�ͣ��к����������������Բ����ĸ�����
//��ע�⣺����˵�ĺ����������ǳ�Ա������Ҳ��������ͨ������
#include<iostream>
using namespace std;
class Circle
{
public:
	Circle()
	{
		cout<<"input   r:"<<endl;
		cin>>r;
		count++;
		cout<<"No."<<count<<endl;
	}
	void add(Circle &a)
	{
		float c;
		c=2*3.14*r+2*3.14*a.r;
		cout<<"C="<<c<<endl;
	}
private:
	float r;
	static int count;
};
int Circle ::count=0;
int main()
{
	class Circle a,b;
	a.add(b);
	return 0;
}

