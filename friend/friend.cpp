#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//ȫ�ֺ�������Ԫ
class Building
{
	friend void goodgay(Building* building);
public:
	
	Building()
	{
		m_visitrooming = "����";
		m_bedrooming = "����";

	}
public:
	string m_visitrooming;
private:
	string m_bedrooming;
};
void goodgay(Building *building)
{
	cout << "�û������ڷ��ʵ���: " << (*building).m_visitrooming << endl;
	cout << "�û������ڷ��ʵ���: " << (*building).m_bedrooming << endl;
}
int main()
{
	
	Building p;
	goodgay(&p);
	system("pause");

	return 0;
}