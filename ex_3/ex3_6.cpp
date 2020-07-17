//����һ����ģ���࣬����ʵ����һά�����е����ֵ����Сֵ��ƽ��ֵ��
//��ģ��û���⣬����ѧһ�¡���ʵ�Ͷ���һ�����࣬��һ���ĵط�����Ҫ���ʺϸ��ֲ�ͬ���������͡����ǿ����ȶ���һ��ֻ����������࣬Ȼ����չ�������ʺϸ��ֲ�ͬ���͵�����������Ҫ����һЩͨ����������
//�磺template <typename T >      //˵����1��ͨ����������T
//template <typename T1,typename T2>  //˵����2��ͨ����������T1��T2

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

