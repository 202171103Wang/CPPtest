//д��һ������ģ��findmax����������Ϊ�������������ֵ��������������
//���øú���ģ�壬������������������͵������������ֵ��
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
	