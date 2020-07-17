//有一个Time类，其中包含数据成员hour，minute，second；
//有一个Date类，其中包含数据成员year，month，day，还有成员函数display用于输出年、月、日及时、分、秒。
#include<iostream>
using namespace std;
class Date;
class Time
{
public:
	Time()
	{
		cout<<"putin hour minute second:"<<endl;
		cin>>hour>>minute>>second;
	}
	void show(Date &a);
private:
	int hour,minute,second;
};
class Date
{
public:
	Date()
	{
		cout<<"putin year month day:"<<endl;
		cin>>year>>month>>day;
	}
	friend class Time;
private:
	int year,month,day;
};
void Time::show(Date &a)
{
	cout<<a.year<<"-"<<a.month<<"-"<<a.day<<endl;
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
int main()
{
	class Time a;
	class Date b;
	a.show(b);
	return 0;
}

