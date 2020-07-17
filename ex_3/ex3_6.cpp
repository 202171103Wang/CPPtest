//定义一个类模板类，可以实现求一维数组中的最大值、最小值和平均值。
//类模板没讲解，请自学一下。其实和定义一般类差不多，不一样的地方就是要能适合各种不同的数据类型。我们可以先定义一个只针对整数的类，然后扩展到可以适合各种不同类型的情况，这就需要定义一些通用数据类型
//如：template <typename T >      //说明了1个通用数据类型T
//template <typename T1,typename T2>  //说明了2个通用数据类型T1和T2

#include<iostream>
#define N 100
using namespace std;
template<class T>
class Num
{
	public:
		Num(T aa[],int nn)
		{
			n=nn;
			for(int i=0;i<n;i++)
				date[i]=aa[i];
		}
		T getmax()
		{
			T max=date[0];
			for(int i=1;i<n;i++)
				if(date[i]>max)
					max=date[i];
			return max;
		}
		T getmin()
		{
			T min=date[0];
			for(int i=1;i<n;i++)
				if(date[i]<min)
					min=date[i];
				return min;
		}
		T getavg()
		{
			T avg;
			T sum=0;
			for(int i=0;i<n;i++)
				sum=sum+date[i];
			avg=sum/n;
			return avg;
		}

	private:
		T date[N];
		int n;
};
int main()
{
	int a[]={1,2,3,4,5,6};
	double b[]={1.1,1.2,1.3};
	Num<int> c(a,sizeof(a)/sizeof(int));
	cout<<c.getmax()<<endl;
	cout<<c.getmin()<<endl;
	cout<<c.getavg()<<endl;
	Num<double> d(b,sizeof(b)/sizeof(double));
	cout<<d.getmax()<<endl;
	cout<<d.getmin()<<endl;
	cout<<d.getavg()<<endl;
	return 0;
}

