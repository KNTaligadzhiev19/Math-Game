#include <iostream>
#include <conio.h>
using namespace std;
char cells[10] = { 'o','1','2','3','4','5','6','7','8','9' };

void board()
{
	system("cls");
	cout << "\n\n\t\tTic Tac Toe\n\n";

	cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "\t     |     |     " << endl;
	cout << "\t  " << cells[1] << "  |  " << cells[2] << "  |  " << cells[3] << endl;

	cout << "\t_____|_____|_____" << endl;
	cout << "\t     |     |     " << endl;

	cout << "\t  " << cells[4] << "  |  " << cells[5] << "  |  " << cells[6] << endl;

	cout << "\t_____|_____|_____" << endl;
	cout << "\t     |     |     " << endl;

	cout << "\t  " << cells[7] << "  |  " << cells[8] << "  |  " << cells[9] << endl;

	cout << "\t     |     |     " << endl << endl;
}

int checkwin()
{
	if (cells[1] == cells[2] && cells[2] == cells[3])

		return 1;
	else if (cells[4] == cells[5] && cells[5] == cells[6])

		return 1;
	else if (cells[7] == cells[8] && cells[8] == cells[9])

		return 1;
	else if (cells[1] == cells[4] && cells[4] == cells[7])

		return 1;
	else if (cells[2] == cells[5] && cells[5] == cells[8])

		return 1;
	else if (cells[3] == cells[6] && cells[6] == cells[9])

		return 1;
	else if (cells[1] == cells[5] && cells[5] == cells[9])

		return 1;
	else if (cells[3] == cells[5] && cells[5] == cells[7])

		return 1;
	else if (cells[1] != '1' && cells[2] != '2' && cells[3] != '3'
		&& cells[4] != '4' && cells[5] != '5' && cells[6] != '6'
		&& cells[7] != '7' && cells[8] != '8' && cells[9] != '9')

		return 0;
	else
		return 2;
}

int main()
{
	int player = 1, flag, choice;
	int x;
	char mark;
	system("color f0");
	cout << "\t\t\tEnter 1 to play with computer\t\tEnter 2 to play with friend" << endl;
	cin >> x;
	if (x == 1)
	{
		do
		{
			board();

			if (player % 2 == 1)
				player = 1;
			else
				player = 2;
			if (player == 2)
			{
				choice = rand() % 9;
				mark = 'O';
				int set = 0;
				while (set == 0)
				{
					if (choice == 1 && cells[1] == '1') {
						cells[1] = mark;
						set = 1;
					}
					else if (choice == 2 && cells[2] == '2') {

						cells[2] = mark;
						set = 1;
					}
					else if (choice == 3 && cells[3] == '3') {

						cells[3] = mark;
						set = 1;
					}
					else if (choice == 4 && cells[4] == '4') {

						set = 1;
						cells[4] = mark;
					}
					else if (choice == 5 && cells[5] == '5') {

						cells[5] = mark;
						set = 1;
					}
					else if (choice == 6 && cells[6] == '6') {

						cells[6] = mark;
						set = 1;
					}
					else if (choice == 7 && cells[7] == '7') {

						cells[7] = mark;
						set = 1;
					}
					else if (choice == 8 && cells[8] == '8') {

						cells[8] = mark;
						set = 1;
					}
					else if (choice == 9 && cells[9] == '9') {

						cells[9] = mark;
						set = 1;
					}
					else
					{
						choice = rand() % 9;
					}
				}
				flag = checkwin();
				player++;
				board();
			}
			else if (player == 1)
			{
				cout << "Players  " << player << ", enter a number:  ";
				cin >> choice;
				mark = 'X';

				if (choice == 1 && cells[1] == '1')

					cells[1] = mark;
				else if (choice == 2 && cells[2] == '2')

					cells[2] = mark;
				else if (choice == 3 && cells[3] == '3')

					cells[3] = mark;
				else if (choice == 4 && cells[4] == '4')

					cells[4] = mark;
				else if (choice == 5 && cells[5] == '5')

					cells[5] = mark;
				else if (choice == 6 && cells[6] == '6')

					cells[6] = mark;
				else if (choice == 7 && cells[7] == '7')

					cells[7] = mark;
				else if (choice == 8 && cells[8] == '8')

					cells[8] = mark;
				else if (choice == 9 && cells[9] == '9')

					cells[9] = mark;
				else
				{
					cout << "Invalid move ";
					player--;
				}
				flag = checkwin();

				player++;
			}
		} while (flag == 2);
		board();
		if (flag == 1)
		{
			cout << "==>\aPlayer " << --player << " win ";
			system("color f1");
		}
		else
		{
			cout << "==>\aGame draw";
			system("color f2");
		}
	}
	else
	{
		do
		{
			board();
			player = (player % 2) ? 1 : 2;
			cout << "Player " << player << ", enter a number:  ";
			cin >> choice;
			mark = (player == 1) ? 'X' : 'O';

			if (choice == 1 && cells[1] == '1')

				cells[1] = mark;
			else if (choice == 2 && cells[2] == '2')

				cells[2] = mark;
			else if (choice == 3 && cells[3] == '3')

				cells[3] = mark;
			else if (choice == 4 && cells[4] == '4')

				cells[4] = mark;
			else if (choice == 5 && cells[5] == '5')

				cells[5] = mark;
			else if (choice == 6 && cells[6] == '6')

				cells[6] = mark;
			else if (choice == 7 && cells[7] == '7')

				cells[7] = mark;
			else if (choice == 8 && cells[8] == '8')

				cells[8] = mark;
			else if (choice == 9 && cells[9] == '9')

				cells[9] = mark;
			else
			{
				system("color f4");
				cout << "Invalid move ";
				player--;
				cin.ignore();
				cin.get();
				system("color f0");
			}

			flag = checkwin();

			player++;
		} while (flag == 2);
		board();

		if (flag == 1) {
			cout << "==>\aPlayer " << --player << " win ";
			system("color f1");
		}
		else
		{
			cout << "==>\aGame draw";
			system("color f2");
		}
		cin.ignore();
		cin.get();
	}
	return 0;
}

