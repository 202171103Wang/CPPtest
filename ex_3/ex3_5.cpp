//定义一个交换两变量值的函数模板。
#include<iostream>
using namespace std;
template <typename T>
void exchange(T &a,T &b)
{
	T t;
	t=a;
	a=b;
	b=t;
}
int main()
{
	int a,b;
	cout<<"putin a b:"<<endl;
	cin>>a>>b;
	exchange(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}