#include "Header.h"
#include "Warehose.h"

void Warehouse::result(Game * game)
{
	cout << "����� ������ �� ������" << endl;
}

Warehouse::Warehouse()
{
	filename = "Warehouse.txt";
	cout << endl << "~~~~~~~~~ ���������� ������ ~~~~~~~~~" << endl << endl;
	read_from_file(filename); //���������� ������� � ������ � ������� ������
}

string Warehouse::get_filename() { return filename; }
