#include "Windows.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int a;
	int b;
	char znak;
	cout << "������� 1 �����" << endl;
	cin >> a;
	cout << "������� 2 �����" << endl;
	cin >> b;
	cout << "������� ��������" << endl;
	cin >> znak;
	switch (znak)
	{
	case '+':
		cout << "���� � ����������";
		//Plus();
		break;
	case '-':
		cout << "����� � ����������";
		//Minus();
		break;
	case '*':
		cout << "��������� � ����������";
		//Umnoj();
		break;
	case '/':
		cout << "������� � ����������";
		//Del();
		break;
	default:
		cout << "������� ���������� ����";
		break;
	}
	return 0;
}