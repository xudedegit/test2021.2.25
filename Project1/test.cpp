#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class person
{
public:
	void showperson()
	{
		cout << "调用showperson函数" << endl;
	}
	void getperson()
	{
		if (this == NULL)
		{
			return;         //这里是为了提高代码的健壮性
		}
		cout << "age=" <<this-> m_age << endl;
	
	}
	int m_age;
};
int main()
{
	person* p = NULL;    //空指针也可以调用成员函数，但是要注意是否使用了this指针
	                    //若使用了this指针，this指针访问成员变量（某属性），则会出现问题
	p->showperson();
	p->getperson();

	system("pause");
	return 0;
}