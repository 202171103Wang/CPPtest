//����һ��������Prime���������������Χ��������д�����������������ݷ�Χ����ʾ�����ݷ�Χ�ڵ�����������
#include<iostream>
using namespace std;
class Prime
{
private:
	int m;
	int n;
	int x;
public:
	void  input()
	{
		cout<<"���뷶Χ"<<endl;
		cin>>n>>m;
	}
	void output()
	{
		if(n>m)
			cout<<"error"<<endl;
		else
		for(x=n;x<=m;x++)
		{
			for(int i=2;i<=x;i++)
				if(x%i==0)
				{
					
					break;
				}
				if(i==x)
					cout<<x<<" ";
		}
	}
};

int main()
{
	class Prime P;
	P.input();
	P.output();
	return 0;
}
