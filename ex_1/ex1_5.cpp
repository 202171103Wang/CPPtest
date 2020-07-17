//声明一个时间类Date，包含年、月、日三个数据成员，
//类中包括设置日期值的setdate函数，以及以"年-月-日"的格式显示日期值的showdate函数，使日期加1天的addone函数。
//最后编写一个主函数，定义日期对象，设置日期值，使日期加1天并显示日期。
#include<iostream>
using namespace std;
class DATE
{
private:
	int y,m,d;
public:
	void setdate()
	{
		cout<<"输入年月日："<<endl;
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
