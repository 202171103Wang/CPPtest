/*һ��	�������������ļ�f1.dat��f2.dat�������ʵ�����¹�����
1��	�Ӽ�������20���������ֱ��������������ļ��У�ÿ���ļ��з�10����������
2��	��f1.dat�ж�10������Ȼ������f2.datԭ�����ݵĺ��棻
3��	��f2.dat�ж�20������
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a[10],b[10],t[20],i;
	int x;
	ofstream myfo1,myfo2,myf2;
	ifstream myf1;
	myfo1.open("E:\\f1.dat",ios::out);
	myfo2.open("E:\\f2.dat",ios::out);
	for(i=0;i<10;i++)
	{
		cin>>a[i];
		myfo1<<a[i]<<" ";
	}
	for(i=0;i<10;i++)
	{
		cin>>b[i];
		myfo2<<b[i]<<" ";
	}
	myfo1.close();
	myfo2.close();
	myf1.open("E:\\f1.dat",ios::in);
	myf2.open("E:\\f2.dat",ios::out|ios::app);
	for(i=0;i<10;i++)
	{
		myf1>>b[i];
	}
	for(i=0;i<10;i++)
	{
		myf2<<b[i]<<" ";
	}
	myf1.close();
	myf2.close();
	myf1.open("E:\\f2.dat",ios::in);
	for(i=0;i<20;i++)
	{
		myf1>>t[i];
		cout<<t[i]<<" ";
	}
	return 0;
}
	
