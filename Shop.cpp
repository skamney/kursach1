#include "Header.h"
#include "Shop.h"

void Shop::result(Game * game)
{
	cout << "����� ������ � ��������" << endl;
}

Shop::Shop()
{
	filename = "Shop.txt";
	cout << endl << "~~~~~~~~~ ���������� �������� ~~~~~~~~~" << endl << endl;
	read_from_file(filename); //���������� ������� � ������ � ������� ������
}

string Shop::get_filename() { return filename; }
