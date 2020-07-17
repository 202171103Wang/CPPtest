//有一个书的类Book及一个作者类Author，分别定义如下：
//试以此两个类为基类，派生出图书查询卡类Card，
//此类新增加一个数据成员no表示卡号，以及一个可以显示卡号、书名、作者、作者年龄、出版时间、出版社、定价等数据的函数。
//最后设计一个主程序来测试此类中的功能。
#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
	Book(int n,string na,int p,string pr,int y,int m)
:no(n),name(na),price(p),press(pr),year(y),month(m){}
	void disp_no(){cout<<"书号："<<no<<endl;}
	void disp_name(){cout<<"书名："<<name<<endl;}
	void disp_price(){cout<<"定价："<<price<<endl;}
	void disp_ym(){cout<<"出版时间："<<year<<'.'<<month<<endl;}
	void disp_press(){cout<<"出版社："<<press<<endl;}
private:
	int no;          //书号
	string name;     //书名
	double price;    //定价
	string press;    //出版社
	int year,month;  //出版时间
};
class Author
{
public:
	Author(string na,int a,int y):name(na),age(a),year(y){}
	void disp_name(){cout<<"作者姓名："<<name<<endl;}
	void disp_age(){cout<<"作者年龄："<<age<<endl;}
	void disp_year(){cout<<"写作时间："<<year<<endl;}
private:
	string name;  //作者姓名
	int age;      //作者年龄
	int year;     //写作时间
};
class card:public Book,public Author
{//卡号、书名、作者、作者年龄、出版时间、出版社、定价
public:
	card(int n,string n1,int p,string pr,int y1,int m,string n2,int a,int y,int nu):
	  Book(n,n1,p,pr,y1,m),Author(n2,a,y),no(nu){}
	  void show_no()
	  {
		  cout<<"卡号"<<":"<<no<<endl;
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

