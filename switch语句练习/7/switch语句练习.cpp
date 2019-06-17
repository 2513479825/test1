//编写程序，实现下面的功能：输入一个实数后，屏幕上显示如下菜单：
//**************
//1.输出相反数
//2.输出平方数
//3.输出平方根
//4.退出
//**************
//输入相应选项，输出结果。
#include <iostream>
using namespace std;
void main()
{
	int choice;
	float a,b;
	cout<<"输入任意一个实数"<<endl;
	cin>>a;
	cout<<"**************"<<endl;
	cout<<"1.输出相反数"<<endl;
	cout<<"2.输出平方数"<<endl;
	cout<<"3.输出平方根"<<endl;
	cout<<"4.退出"<<endl;
	cout<<"**************"<<endl;
	cout<<"请输入相应的运算";
	cin>>choice;
	switch(choice)
	{
       case(1):b=0-a;cout<<"输出数为"<<b<<endl;break;
       case(2):b=a*a;cout<<"输出数为"<<b<<endl;break;
       case(3):b=sqrt(a);cout<<"输出数为"<<b<<endl;break;
       case(4):cout<<"退出"<<endl;break;
	   default:cout<<"您输入有误！"<<endl;break;
	}
}