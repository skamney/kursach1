#include "Header.h"
#include "Game.h"
#include "Chain.h"
#include "Site.h"
#include "Shop.h"
#include "Warehose.h"

const int NotUsed = system("color 1E");
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");

	�hain *chain;
	Game *game;
	Site *site;
	Shop *shop;
	Warehouse *warehouse;

	int swtch1 = 1;
	while (swtch1 != 0) {
		cout << endl << endl << "�������� ��������:" << endl <<
			"|1| <-> ������� ��� ������ �� ���� ����������" << endl <<
			"|2| <-> ���������� ��������� � ����" << endl <<
			"|3| <-> ����� ���� �� ����� -> �������� -> ������" << endl <<
			"|0| <-> �����" << endl;
		cin >> swtch1;
		switch (swtch1)
		{
		case 1: /*������� ��� ������ �� �����*/
			chain = new Site;
			chain = new Shop;
			chain = new Warehouse;
			delete chain;
			break;
		case 2:
			cout << "�������� ��������:" << endl <<
				"|1| <-> ���������� ��� �� ����" << endl <<
				"|2| <-> ���������� ��� � �������" << endl <<
				"|3| <-> ���������� ��� �� �����" << endl <<
				"|0| <-> ������" << endl;
			cin >> swtch1;
			switch (swtch1)
			{
			case 1: /*���������� ��� �� ����*/
				site = new Site;
				site->add_to_file(site->get_filename());
				delete site;
				break;
			case 2: /*���������� ��� � �������*/
				shop = new Shop;
				shop->add_to_file(shop->get_filename());
				delete shop;
				break;
			case 3: /*���������� ��� �� �����*/
				warehouse = new Warehouse;
				warehouse->add_to_file(warehouse->get_filename());
				delete warehouse;
				break;
			default:
				break;
			}
			break;
		case 3:
			std::cout << "OUTPUT:" << std::endl;
			chain = new Site;  // ������ ������� � ���� ����->�������->�����
			chain->setNext(new Shop)->setNext(new Warehouse);

			cout << endl << "������� ������ �� ���� ��� ������ " << endl;
			game = new Game;
			game->set_game();

			chain->search(game);

			delete game;
			break;
		case 0:
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}