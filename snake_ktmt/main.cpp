#include <iostream>
#include <conio.h>
#include <windows.h>

//Menu
void Menu()
{
	int diff;
	do
	{
		cout << "1.Lv1\t2.Lv2\t3.Lv3\t4.Lv4\t5.Lv5\nChon do kho: ";
		cin >> diff;
	} while (diff < 1 || diff>5);
	switch (diff)
	{
	case 1:
		speed *= 10;
		break;
	case 2:
		speed *= 8;
		break;
	case 3:
		speed *= 6;
		break;
	case 4:
		speed *= 4;
		break;
	case 5:
		speed *= 2;
		break;
	}
	do
	{
		cout << "\n1.Che do co ban\t2.Che do tu do\nChon che do: ";
		cin >> mode;
	} while (mode < 1 || mode > 2);
	cout << "Bat dau tro choi?\n";
	system("pause");
	system("cls");

}
int main()
{
	New_snake();
	Menu();
	do
	{
		DrawMap();
		Key_input();
		Rule();
		Sleep(speed);
	} while (!end_game);
	if (end_game == true)
	{
		cout << "GAME OVERRRR!!" << endl;
	}
	system("pause");
    return 0;
    //19521103
}
