//����һ�������࣬�������������a��b����Ϊ3��5�С�����������֮�͡�
#include<iostream>
using namespace std;
class J
{
public:
	J()
	{	for(int j=0;j<3;j++)
		for(int i=0;i<5;i++)
			cin>>x[j][i];
	}
	void show()
	{
		for(int j=0;j<3;j++)
		{
			for(int i=0;i<5;i++)
				cout<<x[j][i]<<" ";
			cout<<endl;
		}
	}
	J add(J a)
	{
		for(int j=0;j<3;j++)
		for(int i=0;i<5;i++)
			a.x[j][i]=a.x[j][i]+x[j][i];
		return a;
		
	}
private:
	int x[3][5];
};
int main()
{
	class J a,b;
	a=a.add(b);
	a.show();
	
	
   return 0;
}
