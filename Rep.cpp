// ������ ������ � ����
#include<iostream>
#include<fstream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "RUS");
	ofstream out("test");
	if (!out) {

		cout << "�� ������� ������� ����.\n";
		return 1;
	}

	out << 10 << " " << 123.23 << "\n";
	out << "��� �������� ��������� ����.";

	out.close();

	system("pause");
	return 0;
}