//����һ���ַ�����String�����������+��ʹ֮��ʵ�ֶ����ַ��������ӡ�
//���ز��������"<<"������ȡ�����">>"��ʹ֮�����ڸ��ַ����������������
#include<iostream>
using namespace std;
class String
{
public:
	String(char*c)
	{
		n=strlen(c)+1;
		s=new char[n];
		strcpy(s,c);
	}
	String()
	{
		n=1;
		s=new char[n];
		strcpy(s,"\0");
	}
	String & operator+(String &a)
	{
		String temp;
		temp.n=n;
		temp.s=new char[temp.n];
		strcpy(temp.s,s);
		s=strcat(temp.s,a.s);
		return temp;
		
	}
	friend ostream &operator<<(ostream &out,String &t);
private:
	char*s;
	int n;
};
ostream &operator<<(ostream &out,String &t)
{
	out<<t.s;
	return out;
}
int main()
{
	String s("abc");
	String t("def"),q;
	cout<<s<<endl;
	cout<<t<<endl;
	q=s+t;
	cout<<q<<endl;
	return 0;
}
//������������㲻��
