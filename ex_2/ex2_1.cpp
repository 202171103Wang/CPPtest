//���ݵĳ�ʼ���ù��캯��ʵ��
//����һ���������࣬
//�������ݳ�Ա����length��width��height��
//��Ա������set(�ɼ������볤��ߵ�ֵ)��cal(���㳤�������) ��show(�������������)��
//Ȼ���дһ������������3��������������
#include<iostream>
using namespace std;
class V
{
public:
	V()
	{
		cout<<"putin length,width,height"<<endl;
		cin>>length>>width>>height;
	}
	void cal()
	{
		v=length*width*height;
	}
	void show()
	{
		cout<<v<<endl;
	}
private:
	float length,width,height,v;
};
int main()
{
	class V v1,v2,v3;
	v1.cal();v1.show();
	v2.cal();v2.show();
	v3.cal();v3.show();
	return 0;
}
