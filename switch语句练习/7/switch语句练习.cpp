//��д����ʵ������Ĺ��ܣ�����һ��ʵ������Ļ����ʾ���²˵���
//**************
//1.����෴��
//2.���ƽ����
//3.���ƽ����
//4.�˳�
//**************
//������Ӧѡ���������
#include <iostream>
using namespace std;
void main()
{
	int choice;
	float a,b;
	cout<<"��������һ��ʵ��"<<endl;
	cin>>a;
	cout<<"**************"<<endl;
	cout<<"1.����෴��"<<endl;
	cout<<"2.���ƽ����"<<endl;
	cout<<"3.���ƽ����"<<endl;
	cout<<"4.�˳�"<<endl;
	cout<<"**************"<<endl;
	cout<<"��������Ӧ������";
	cin>>choice;
	switch(choice)
	{
       case(1):b=0-a;cout<<"�����Ϊ"<<b<<endl;break;
       case(2):b=a*a;cout<<"�����Ϊ"<<b<<endl;break;
       case(3):b=sqrt(a);cout<<"�����Ϊ"<<b<<endl;break;
       case(4):cout<<"�˳�"<<endl;break;
	   default:cout<<"����������"<<endl;break;
	}
}