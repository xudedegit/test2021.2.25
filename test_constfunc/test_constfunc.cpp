#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//*****�������볣����Ĳ���******

class person
{
public:
	void getperson() const        //�ڳ�Ա�������const ���ǽ����Ϊ������ ����  const person * const this �ڶ���const����this��ָ���ܸı�
		                          //��һ��const����this��ָ���ֵ���ܸı�
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

int person::phone = 0; //��̬��Ա����Ӧ�������ⶨ��

int main()
{
	person p;
	p.getperson();
	cout << "p������Ϊ��" << p.m_age << endl;
	cout << "p�ĵ绰Ϊ��" << p.phone << endl;
	const person p1;
	p1.m_tele = 122;    //�������п����޸�mutable���εĳ�Ա����
	p1.getperson();
	//p1.func1();        //�����󲻿��Ե��÷� ����������Ϊ�� �������п��Ը��ĳ�Ա������ֵ�����������ǲ����Ըı��Ա���Ե�
	system("pause");
	return 0;
}