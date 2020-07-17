//数据的初始化用构造函数实现
//声明一个时间类Date，包含年、月、日三个数据成员，类中包括设置日期值的setdate函数，以及以"年-月-日"的格式显示日期值的showdate函数，使日期加1天的addone函数。
//最后编写一个主函数，定义日期对象，设置日期值，使日期加1天并显示日期。
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