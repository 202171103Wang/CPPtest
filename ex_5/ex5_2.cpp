//����һ��������Date�����ݳ�Ա�����ꡢ�¡��գ����캯����PrintDate()�����ֱ������������ں���ʾ���ڣ�
//�ٶ���һ��ʱ����Time�����ݳ�Ա����ʱ���֡��룬���캯����PrintTime()�����ֱ���������ʱ�����ʾʱ�䣻
//�ڴ˻������ٶ���һ������ʱ����TimeDate������������е������࣬����д������������������ࡣ

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