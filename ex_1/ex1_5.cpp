//����һ��ʱ����Date�������ꡢ�¡����������ݳ�Ա��
//���а�����������ֵ��setdate�������Լ���"��-��-��"�ĸ�ʽ��ʾ����ֵ��showdate������ʹ���ڼ�1���addone������
//����дһ�����������������ڶ�����������ֵ��ʹ���ڼ�1�첢��ʾ���ڡ�
#include<iostream>
using namespace std;
class DATE
{
private:
	int y,m,d;
public:
	void setdate()
	{
		cout<<"���������գ�"<<endl;
		cin>>y>>m>>d;
	}
	void showdate()
	{
		cout<<y<<"-"<<m<<"-"<<d<<endl;
	}
	void addone()
	{
		d+=1;
		if(d==31||d==29||d==32)
			switch(d)
		{
			case 32:if(m==1||m==3||m==5||m==7||m==8||m==10)
					{
						m+=1;
						d=1;
					}
				else
					if(m==12)
					{
						y+=1;
						m=1;
						d=1;
					}
				break;
			case 31:if(m==4||m==6||m==9||m==11)
					{
						m+=1;
						d=1;
					}
				break;
			case 29:if(m==2)
					{
						m+=1;
						d=1;
					}
				break;
		}
	}
};
				
			
int main()
{
	class DATE date;
	date.setdate();
	date.addone();
	date.showdate();
	return 0;
}
