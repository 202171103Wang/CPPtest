//写出一个函数模板findmax，函数功能为求三个数的最大值，定义主函数，
//调用该函数模板，可以求出各种数据类型的三个数的最大值。
#include<iostream>
using namespace std;
template<typename T>
T findmax(T *a)
{
	T max=a[0];
	for(int i=1;i<3;i++)
		if(a[i]>max)
			max=a[i];

		return max;
}
int main()
{
	int a[]={1,2,3};
	cout<<"max="<<findmax(a)<<endl;
	return 0;
}
	