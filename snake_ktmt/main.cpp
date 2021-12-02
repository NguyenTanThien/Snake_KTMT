#include <iostream>
#include <conio.h>
#include <windows.h>
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
		cout << "GAME OVER!" << endl;
	}
	system("pause");
    return 0;
}
