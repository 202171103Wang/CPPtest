//求一元二次方程的实根，如果没有实根，输出警告信息。
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,t;
	float x1,x2;
	cout<<"input A B C"<<endl;
	cin>>a>>b>>c;
	try
	{
		t=b*b-4*a*c;
		if(t<0)
			throw t;
		x1=(-1*b+sqrt(t))/2.0*a;
		x2=(-1*b-sqrt(t))/2.0*a;
		cout<<x1<<endl;
		cout<<x2<<endl;
	}
	catch(float)
	{
		cout<<"no exist!"<<endl;
	}
	return 0;
}