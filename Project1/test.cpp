#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class person
{
public:
	void showperson()
	{
		cout << "����showperson����" << endl;
	}
	void getperson()
	{
		if (this == NULL)
		{
			return;         //������Ϊ����ߴ���Ľ�׳��
		}
		cout << "age=" <<this-> m_age << endl;
	
	}
	int m_age;
};
int main()
{
	person* p = NULL;    //��ָ��Ҳ���Ե��ó�Ա����������Ҫע���Ƿ�ʹ����thisָ��
	                    //��ʹ����thisָ�룬thisָ����ʳ�Ա������ĳ���ԣ�������������
	p->showperson();
	p->getperson();

	system("pause");
	return 0;
}