#include "Header.h"
#include "Game.h"
using namespace std;

Game::Game()
{
	name[0] = EOF;
	genre[0] = EOF;
	year = 0;
	platform[0] = EOF;
	sys_req[0] = EOF;
	developer[0] = EOF;
	quantity = 0;
}

Game::Game(char * name1, char * genre1, int year1, char * platform1, char * sys_req1, char * developer1, int quantity1)
{
	strcpy(name, name1);
	strcpy(name, name1);
	year = year1;
	strcpy(name, name1);
	strcpy(name, name1);
	strcpy(name, name1);
	quantity = quantity1;
}

void Game::set_game(void)
{
	cout << "������� �������� " << endl;
	cin >> name;
	cout << "������� ���� " << endl;
	cin >> genre;
	cout << "������� ��� ������� " << endl;
	cin >> year;
	cout << "������� ������� ��������� " << endl;
	cin >> platform;
	cout << "������� ��������� ���������� " << endl;
	cin >> sys_req;
	cout << "������� ������������ " << endl;
	cin >> developer;
	cout << "������� ���������� " << endl;
	cin >> quantity;
}

void Game::show_game(void)
{
	cout << "�������� ����: " << name << "; ���� ����: " << genre << "; ��� ������� " << year << "; ������� ��������� " << platform << "; C�������� ���������� " << sys_req << endl;
	cout << "; ����������� " << developer << "; ���������� " << quantity << ";" << endl;
}
