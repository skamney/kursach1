#include "Header.h"
#include "Site.h"

void Site::result(Game * game)
{
	{
		cout << "����� ������ �� �����" << endl;
	}
}

Site::Site()
{
	filename = "Site.txt";
	cout << endl << "~~~~~~~~~ ���������� ����� ~~~~~~~~~" << endl << endl;
	read_from_file(filename); //���������� ������� � ������ � ������� ������
}

string Site::get_filename() { return filename; }
