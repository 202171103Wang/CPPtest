//����һ������ѧ����Ϣ���࣬���ݳ�Ա����������ѧ�š���ѧ��Ӣ���Ա��������������ݡ�����������ѧ�źͶ��ſγ̵ĳɼ���
//����дһ��������������һ��ѧ������������ѧ�������ֵ��
#include<iostream>
using namespace std;
class stu
{
private:
	char name[10];
	char nu[10];
	float CH;
	float EN;
public:
	void output()
	{
		cout<<name<<endl;
		cout<<nu<<endl;
		cout<<CH<<endl;
		cout<<EN<<endl;
	}
	void input()
	{
		cout<<"����ѧ��������"<<endl;
		cin>>name;
		cout<<"����ѧ��ѧ�ţ�"<<endl;
		cin>>nu;
		cout<<"����ѧ�����ġ�Ӣ��ɼ���"<<endl;
		cin>>CH>>EN;
	}
};
int main()
{
	class stu STU;
	STU.input();
	STU.output();

	return 0;
}
