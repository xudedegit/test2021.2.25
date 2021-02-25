#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//全局函数做友元
class Building
{
	friend void goodgay(Building* building);
public:
	
	Building()
	{
		m_visitrooming = "客厅";
		m_bedrooming = "卧室";

	}
public:
	string m_visitrooming;
private:
	string m_bedrooming;
};
void goodgay(Building *building)
{
	cout << "好基友正在访问的是: " << (*building).m_visitrooming << endl;
	cout << "好基友正在访问的是: " << (*building).m_bedrooming << endl;
}
int main()
{
	
	Building p;
	goodgay(&p);
	system("pause");

	return 0;
}