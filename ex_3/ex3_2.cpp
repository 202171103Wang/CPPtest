//����һ��ѧ���࣬��ѧ�š����������ſγ̵ĳɼ���Ҫ���ܹ�����һ���༶�ĸ��ƿγ̵�ƽ���֡����༶�������40�ˣ�
#include<iostream>
using namespace std;
class stu
{
public:
	stu()
	{
		cout<<"putin nu name:"<<endl;
		cin>>nu>>name;
		cout<<"putin  chin  math  eng:"<<endl;
		cin>>chin>>math>>eng;
		count++;
		cout<<"now sum:"<<count<<endl;
		schin=schin+chin;
		smath=smath+math;
		seng=seng+eng;
	}
	void avg()
	{
		achin=schin/count;
		amath=smath/count;
		aeng=seng/count;
		cout<<"chin avg:"<<achin<<endl;
		cout<<"math avg:"<<amath<<endl;
		cout<<"eng avg:"<<aeng<<endl;
	}
private:
	char nu[10];
	char name[10];
	int chin,math,eng;
	float achin,amath,aeng;
	static float schin,smath,seng;
	static int count;
};
int stu::count=0;
float stu::schin=0;
float stu::smath=0;
float stu::seng=0;
int main()
{
	class stu a,b,c;
	c.avg();
	return 0;
}
