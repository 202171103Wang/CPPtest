//定义一个描述学生信息的类，数据成员包括姓名、学号、数学、英语；成员函数包括输出数据、设置姓名、学号和二门课程的成绩。
//最后编写一个主函数，定义一个学生对象，输出这个学生对象的值。
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
		cout<<"输入学生姓名："<<endl;
		cin>>name;
		cout<<"输入学生学号："<<endl;
		cin>>nu;
		cout<<"输入学生语文、英语成绩："<<endl;
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
