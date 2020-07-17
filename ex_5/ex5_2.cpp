//定义一个日期类Date，数据成员包括年、月、日，构造函数和PrintDate()函数分别用于设置日期和显示日期；
//再定义一个时间类Time，数据成员包括时、分、秒，构造函数和PrintTime()函数分别用于设置时间和显示时间；
//在此基础上再定义一个日期时间类TimeDate，充分利用已有的两个类，并编写主函数测试所定义的类。

#include<iostream>
using namespace std;
class Date
{
public:
	Date(int a,int b,int c):year(a),month(b),day(c){}
	void printdate()
	{
		cout<<year<<"-"<<month<<"-"<<day<<endl;
	}
protected:
	int year,month,day;
};
class Time
{
public:
	Time(int a,int b,int c):hour(a),minute(b),second(c){}
	void printime()
	{
		cout<<hour<<":"<<minute<<":"<<second<<endl;
	}
protected:
	int hour,minute,second;
};
class Timedate:public Date,public Time
{
public:
	Timedate(int y,int m,int d,int h,int n,int s):Date(y,m,d),Time(h,n,s){}
};
int main()
{
	Timedate a(2018,5,22,11,40,2);
	a.printdate();
	a.printime();
	return 0;
}