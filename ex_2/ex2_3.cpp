//���ݵĳ�ʼ���ù��캯��ʵ��
//����һ��������Prime���������������Χ��������д�����������������ݷ�Χ����ʾ�����ݷ�Χ�ڵ�����������
#include<iostream>
using namespace std;
class Prime
{
public:
	Prime()
	{
		cout<<"putin n m  !(n<=m)"<<endl;
		cin>>n>>m;
	}
	void out()
	{
		for(int x=n;x<=m;x++)
		{
			for(int i=2;i<=x;i++)
				if(x%i==0)
					break;
				if(i==x)
					cout<<x<<" ";
		}
	}
private:
	int n,m;
};
int main()
{
	Prime p;
	p.out();
	return 0;
}