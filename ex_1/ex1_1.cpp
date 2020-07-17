//设计一个最多可求4个正整数的最大值的函数。（注意：是写一个函数）
#include<iostream>
using namespace std;
int max(int a,int b,int c=0,int d=0)
{
	int max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	if(max<d)
		max=d;
	return max;
}
int main()
{
	int x1,x2,x3,x4;
	int m;
	cout<<"输入四个正整数不足用0补齐："<<endl;
	cin>>x1>>x2>>x3>>x4;
	m=max(x1,x2,x3,x4);
	cout<<"最大值："<<m<<endl;

	return 0;
}
