//��һ�������Book��һ��������Author���ֱ������£�
//���Դ�������Ϊ���࣬������ͼ���ѯ����Card��
//����������һ�����ݳ�Աno��ʾ���ţ��Լ�һ��������ʾ���š����������ߡ��������䡢����ʱ�䡢�����硢���۵����ݵĺ�����
//������һ�������������Դ����еĹ��ܡ�
#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
	Book(int n,string na,int p,string pr,int y,int m)
:no(n),name(na),price(p),press(pr),year(y),month(m){}
	void disp_no(){cout<<"��ţ�"<<no<<endl;}
	void disp_name(){cout<<"������"<<name<<endl;}
	void disp_price(){cout<<"���ۣ�"<<price<<endl;}
	void disp_ym(){cout<<"����ʱ�䣺"<<year<<'.'<<month<<endl;}
	void disp_press(){cout<<"�����磺"<<press<<endl;}
private:
	int no;          //���
	string name;     //����
	double price;    //����
	string press;    //������
	int year,month;  //����ʱ��
};
class Author
{
public:
	Author(string na,int a,int y):name(na),age(a),year(y){}
	void disp_name(){cout<<"����������"<<name<<endl;}
	void disp_age(){cout<<"�������䣺"<<age<<endl;}
	void disp_year(){cout<<"д��ʱ�䣺"<<year<<endl;}
private:
	string name;  //��������
	int age;      //��������
	int year;     //д��ʱ��
};
class card:public Book,public Author
{//���š����������ߡ��������䡢����ʱ�䡢�����硢����
public:
	card(int n,string n1,int p,string pr,int y1,int m,string n2,int a,int y,int nu):
	  Book(n,n1,p,pr,y1,m),Author(n2,a,y),no(nu){}
	  void show_no()
	  {
		  cout<<"����"<<":"<<no<<endl;
	  }
protected:
	int no;
};
int main()
{
	card a(1,"aa",1,"bb",1999,10,"cc",22,4,7);
	a.show_no();
	a.Book::disp_name();
	a.Author::disp_name();
	a.disp_age();
	a.disp_ym();
	a.disp_press();
	a.disp_price();
	return 0;
}

