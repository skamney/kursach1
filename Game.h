#pragma once
class Game {

	friend class �hain;     // ����������� ����� ������ � ���������� ���������

	char name[50];			//��������
	char genre[20];			//����
	int year;				//��� �������
	char platform[10];		//������� ��������� (��, Xbox, PS)
	char sys_req[100];			//��������� ����
	char developer[30];		//�����������
	int quantity;			//����������

public:
	///�����������
	Game();
	///����������� � �����������
	Game(char* name1, char* genre1, int year1, char* platform1, char* sys_req1, char* developer1, int quantity1);
	///������
	void set_game(void);
	///��������
	void show_game(void);
};

