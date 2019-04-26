#include "Header.h"
#include "Chain.h"
#include "Game.h"

void �hain::result(Game * game){}

�hain::�hain()
{
	next = nullptr;
	game_list = nullptr;
	size_of_game_list = NULL;
}

�hain * �hain::setNext(�hain * �hain)
{
	next = �hain;
	return next;
}

void �hain::search(Game * game)
{
	bool flag = false;
	for (int i = 0; i < size_of_game_list; i++)
	{
		if (!strcmp(game_list[i].name, game->name) && !strcmp(game_list[i].platform, game->platform) && (game_list[i].quantity >= game->quantity))
		{
			flag = true;
		}
	}

	if (flag)
	{
		result(game);
		return;
	}
	else
	{
		if (next)
		{
			next->search(game);
		}
		else
		{
			cout << "���� ����� �� ���� �������." << endl;
			return;
		}
	}
}

void �hain::add_to_file(string file)
{
	int add_value; //������� ��� ����� ��������
	read_from_file(file);

	cout << "������� ��� �� ������ �������� � ����? " << endl;
	cin >> add_value;
	size_of_game_list += add_value;

	write_to_file(file, add_value);
}

void �hain::write_to_file(string file, int add_val)
{
	ofstream out;
	Game tmp;
	try
	{
		out.open(file, ios::out);
		if (!out.is_open()) {
			throw 505;
		}

		out.write(reinterpret_cast<char*>(&size_of_game_list), sizeof(int));

		for (int i = 0; i < size_of_game_list - add_val; i++)
		{
			out.write(reinterpret_cast<char*>(&game_list[i]), sizeof(Game)); //�������������� ���������� gamelist
		}

		for (int i = 0; i < add_val; i++)
		{
			tmp.set_game();
			out.write(reinterpret_cast<char*>(&tmp), sizeof(Game)); //��������� ����� ������
		}
		out.close();
	}
	catch (const int &ex)
	{
		cout << "������ �������� �����!" << endl << "��� ������: #" << ex << endl;
	}
}

void �hain::read_from_file(string file)
{
	ifstream in;
	try
	{
		in.open(file, ios::in);
		if (!in.is_open())
		{
			throw 505;
		}
		else
		{
			if (in.peek() == EOF)
			{
				throw 510;
			}
		}
		in.read(reinterpret_cast<char*>(&size_of_game_list), sizeof(int));
		game_list = new Game[size_of_game_list];
		for (int i = 0; i < size_of_game_list; i++)
		{
			in.read(reinterpret_cast<char*>(&game_list[i]), sizeof(Game));
			game_list[i].show_game();
		}
		in.close();
	}
	catch (const int &ex)
	{
		cout << "������ ������ �����!" << endl << "��� ������: #" << ex << endl;
	}
}

�hain::~�hain()
{
	if (game_list)
	{
		delete[] game_list;
	}
	if (next)
	{
		delete next;
	}
}
