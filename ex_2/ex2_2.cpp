//���ݵĳ�ʼ���ù��캯��ʵ��
//����һ��ʱ����Date�������ꡢ�¡����������ݳ�Ա�����а�����������ֵ��setdate�������Լ���"��-��-��"�ĸ�ʽ��ʾ����ֵ��showdate������ʹ���ڼ�1���addone������
//����дһ�����������������ڶ�����������ֵ��ʹ���ڼ�1�첢��ʾ���ڡ�
#include<iostream>
using namespace std;
class Date
{
public:
	Date()
	{
		cout<<"putin year,month,day:"<<endl;
		cin>>y>>m>>d;
	}
	void showdate()
	{
		cout<<y<<"-"<<m<<"-"<<d<<endl;
	}
	void addone()
	{
		d++;
		if(m==1||m==3||m==5||m==7||m==8||m==10)
			if(d==32)
			{
				m++;
				d=1;
			}
			if(m==4||m==6||m==9||m==11)
				if(d==31)
				{
					m++;
					d=1;
				}
				if(m==2)
					if(d==29)
					{
						m++;
						d=1;
					}
					if(m==12)
						if(d==32)
						{
							m=1;d=1;y++;
						}
	}
private:
	int y,m,d;
};
	int main()
	{
		Date date;
		date.showdate();
		date.addone();
		date.showdate();
		return 0;
	}