#include <iostream>
#include "KEEPER.h"
#include <Windows.h>


#define EXIT -1
#define CLEAR 0
#define SEEALL 1
#define ADD 2
#define DEL 3
#define EDIT 4
#define SEARCH_DEST 5
#define SEARCH_NUM 6
#define SEARCH_TIME 7


void msg()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("cls");
	printf("����\n");
	printf("%d �����\n", EXIT);
	printf("%d ��������\n", CLEAR);
	printf("%d ������� ��\n", SEEALL);
	printf("%d ��������\n", ADD);
	printf("%d �������������\n", EDIT);
	printf("%d �������\n", DEL);
	printf("%d ����� �� �����������\n", SEARCH_DEST);
	printf("%d ����� �� ������\n", SEARCH_NUM);
	printf("%d ����� �� �������\n", SEARCH_TIME);


}

int main()
{
	KEEPER cnt;
	msg();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	int t = 0;
	while (true)
	{
		printf("\n����\n");
		scan("%d", &t);
		switch (t)
		{

		case EXIT:
			return 0;

		case CLEAR:
			msg();
			break;

		case SEEALL:
			try {
				cnt.seeall();
			}
			catch (int e) {
				if (e == -1)
					cout << "����������: ������� �� ��������" << endl;
			}
			break;


		case ADD:
			try {
				cnt.add();
			}
			catch (char* m) {
				printf("%s\n", m);
			};

			break;

		case EDIT:
			try {
				cnt.edit();
			}
			catch (int e) {
				if (e == -1)
					cout << "����������: ������� �� ��������" << endl;
			}
			break;

		case DEL:
			try {
				cnt.delet();
			}
			catch (int e) {
				if (e == -1)
					cout << "����������: ������� �� ��������" << endl;
			}
			break;

		case SEARCH_DEST:
			try {
				cnt.seeWithDestination();
			}
			catch (int e) {
				if (e == -1)
					cout << "����������: ������� �� ��������" << endl;
			}

			break;

		case SEARCH_NUM:
			try {
				cnt.seeWithNumber();
			}
			catch (int e) {
				if (e == -1)
					cout << "����������: ������� �� ��������" << endl;
			}

			break;

		case SEARCH_TIME:
			try {
				cnt.seeWithTime();
			}
			catch (int e) {
				if (e == -1)
					cout << "����������: ������� �� ��������" << endl;
			}

			break;

		default:

			printf("����������:(\n");
			break;

		}
	}

	return 0;
}
