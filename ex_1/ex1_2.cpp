//����������������������������һ������rank�󣬿��Խ���������������С�����˳���������ע�⣺��Ҫ������ʵ�֣�
#include<iostream>
using namespace std;
void rank(int &a,int &b,int &c)
{
	int t;
	if(a>b)
		if(b>c)
			t=a,c=a,c=t;
		else
			if(a>c)
			{
				t=c,c=b,b=t;
				t=a,a=c,c=t;
			}
			else
				t=a,a=b,b=t;
    else
		if(b>c)
			if(a>c)
			{
				t=c,c=a,a=t;
				t=c,c=b,b=t;
			}
			else
				t=b,b=c,c=t;
}

int main()
{
	int x1,x2,x3;
	cout<<"��������������"<<endl;
	cin>>x1>>x2>>x3;
	rank(x1,x2,x3);
	cout<<x1<<" "<<x2<<" "<<x3<<endl;
	return 0;
}
