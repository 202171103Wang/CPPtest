//��һ��Time�࣬���а������ݳ�Աhour��minute��second��
//��һ��Date�࣬���а������ݳ�Աyear��month��day�����г�Ա����display��������ꡢ�¡��ռ�ʱ���֡��롣
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

