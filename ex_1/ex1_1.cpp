//���һ��������4�������������ֵ�ĺ�������ע�⣺��дһ��������
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
	cout<<"�����ĸ�������������0���룺"<<endl;
	cin>>x1>>x2>>x3>>x4;
	m=max(x1,x2,x3,x4);
	cout<<"���ֵ��"<<m<<endl;

	return 0;
}
