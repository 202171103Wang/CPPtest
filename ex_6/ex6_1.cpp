/*一、	建立两个磁盘文件f1.dat和f2.dat，编程序实现以下工作：
1、	从键盘输入20个整数，分别存放在两个磁盘文件中（每个文件中放10个整数）；
2、	从f1.dat中读10个数，然后存放在f2.dat原有数据的后面；
3、	从f2.dat中读20个数。
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
	
