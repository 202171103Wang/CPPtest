//����һ���������࣬�������ݳ�Ա����length��width��height��
//��Ա������set(�ɼ������볤��ߵ�ֵ)��cal(���㳤�������) ��show(�������������)��
//Ȼ���дһ������������3��������������
#include<iostream>
using namespace std;
class T
{
private:
	float length;
	float width;
	float height;
	float V;
public:
	void set()
	{
		cin>>length>>width>>height;
	}
	void cal()
	{
		
		V=length*width*height;
	}
	void show()
	{
		cout<<V<<endl;
	}
};
int main()
{
	class T v1,v2,v3;
	cout <<"��������������ĳ����"<<endl;
	v1.set();v1.cal();v1.show();
	v2.set();v2.cal();v2.show();
	v3.set();v3.cal();v3.show();
	return 0;
}
