#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//*****常函数与常对象的测试******

class person
{
public:
	void getperson() const        //在成员函数后加const 我们将其称为常函数 形如  const person * const this 第二个const锁定this的指向不能改变
		                          //第一个const锁定this所指向的值不能改变
	{
		phone = 133;
		this->m_age = 10;
		this->m_tele = 110;
	}

	void func1()
	{
	
	}
	mutable int m_age;
	mutable int m_tele;
	static int phone;

};

int person::phone = 0; //静态成员变量应该在类外定义

int main()
{
	person p;
	p.getperson();
	cout << "p的年龄为：" << p.m_age << endl;
	cout << "p的电话为：" << p.phone << endl;
	const person p1;
	p1.m_tele = 122;    //常对象中可以修改mutable修饰的成员变量
	p1.getperson();
	//p1.func1();        //常对象不可以调用非 常函数，因为非 常函数中可以更改成员变量的值，而常对象是不可以改变成员属性的
	system("pause");
	return 0;
}