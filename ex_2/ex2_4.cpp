//��дһ����CAL�������fact=1��2��3��������nֵ��
//���а������ݳ�Աn��fact����Ա����������ʼ��n�Ĺ��캯������factֵ��process���������n��factֵ��show������д��������������n��ֵ������������
#include<iostream>
using namespace std;
class CAL
{
public:
	CAL()
	{
		cout<<"1*2*3*4*...*n"<<endl;
		cout<<"putin :n:"<<endl;
		cin>>n;
	}
	void process()
	{
		this->fact=1;
		for(int i=1;i<=n;i++)
			fact=fact*i;
	}
	void show()
	{
		cout<<fact<<endl;
	}
private:
	int n;
	int fact;
};
int main()
{
	CAL f;
	f.process();
	f.show();
	return 0;
}