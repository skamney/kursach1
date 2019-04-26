#pragma once
#include "Header.h"
#include "Game.h"
class �hain {
protected:

	�hain *next;						// ����� ������ �����������, ������� ������� ����, ���� ��� �������� ��� ������� �������
	Game *game_list;					// ������ � ������
	int size_of_game_list;				// ������ ������� � ������
	virtual void result(Game* game);	// ��������� ��������� ����

public:

	�hain();

	///���� �� ���������� ������ ��� ���� � ���� ����, ��������� �� ���������
	�hain* setNext(�hain* �hain);


	/// ���� �� ���������� ������ ��� ���� � ���� ����, ��������� �� ���������
	void search(Game* game);

	///�������� � ����
	void add_to_file(string file);


	///������ � ����
	void write_to_file(string file, int add_val);

	///������ �� �����
	void read_from_file(string file);

	virtual ~�hain();
};