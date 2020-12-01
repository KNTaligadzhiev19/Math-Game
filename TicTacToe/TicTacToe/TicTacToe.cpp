#include <iostream>
#include <conio.h>
using namespace std;

void board(char cells[])
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

void ifWinHorizontal(char cells[])
{
	system("cls");

	cout << "\n\n\t\tTic Tac Toe\n\n";
	cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "\t     |     |     " << endl;
	if (cells[1] == cells[2] && cells[2] == cells[3])
	{
		cout << "\t--" << cells[1] << "--|--" << cells[2] << "--|--" << cells[3] << "--" << endl;
	}
	else { cout << "\t  " << cells[1] << "  |  " << cells[2] << "  |  " << cells[3] << endl; }
	cout << "\t_____|_____|_____" << endl;
	cout << "\t     |     |     " << endl;
	if (cells[4] == cells[5] && cells[5] == cells[6])
	{
		cout << "\t--" << cells[4] << "--|--" << cells[5] << "--|--" << cells[6] << "--" << endl;
	}
	else { cout << "\t  " << cells[4] << "  |  " << cells[5] << "  |  " << cells[6] << endl; }
	cout << "\t_____|_____|_____" << endl;
	cout << "\t     |     |     " << endl;
	if (cells[7] == cells[8] && cells[8] == cells[9])
	{
		cout << "\t--" << cells[7] << "--|--" << cells[8] << "--|--" << cells[9] << "--" << endl;
	}
	else { cout << "\t  " << cells[7] << "  |  " << cells[8] << "  |  " << cells[9] << endl; }
	cout << "\t     |     |     " << endl << endl;
}
void ifWinVertical1(char cells[])
{
	system("cls");
	cout << "\n\n\t\tTic Tac Toe\n\n";

	cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;


	cout << "\t  |  |     |     " << endl;
	cout << "\t  " << cells[1] << "  |  " << cells[2] << "  |  " << cells[3] << endl;

	cout << "\t__|__|_____|_____" << endl;
	cout << "\t  |  |     |     " << endl;

	cout << "\t  " << cells[4] << "  |  " << cells[5] << "  |  " << cells[6] << endl;

	cout << "\t__|__|_____|_____" << endl;
	cout << "\t  |  |     |     " << endl;

	cout << "\t  " << cells[7] << "  |  " << cells[8] << "  |  " << cells[9] << endl;

	cout << "\t  |  |     |     " << endl << endl;

}
void ifWinVertical2(char cells[])
{
	system("cls");
	cout << "\n\n\t\tTic Tac Toe\n\n";

	cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	if (cells[2] == cells[5] && cells[5] == cells[8])
	{
		system("cls");
		cout << "\n\n\t\tTic Tac Toe\n\n";

		cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
		cout << endl;

		cout << "\t     |  |  |     " << endl;
		cout << "\t  " << cells[1] << "  |  " << cells[2] << "  |  " << cells[3] << endl;

		cout << "\t_____|__|__|_____" << endl;
		cout << "\t     |  |  |     " << endl;

		cout << "\t  " << cells[4] << "  |  " << cells[5] << "  |  " << cells[6] << endl;

		cout << "\t_____|__|__|_____" << endl;
		cout << "\t     |  |  |     " << endl;

		cout << "\t  " << cells[7] << "  |  " << cells[8] << "  |  " << cells[9] << endl;

		cout << "\t     |  |  |     " << endl << endl;
	}
}
void ifWinVertical3(char cells[])
{
	system("cls");
	cout << "\n\n\t\tTic Tac Toe\n\n";

	cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "\t     |     |  |   " << endl;
	cout << "\t  " << cells[1] << "  |  " << cells[2] << "  |  " << cells[3] << endl;

	cout << "\t_____|_____|__|__" << endl;
	cout << "\t     |     |  |  " << endl;

	cout << "\t  " << cells[4] << "  |  " << cells[5] << "  |  " << cells[6] << endl;

	cout << "\t_____|_____|__|__" << endl;
	cout << "\t     |     |  |  " << endl;

	cout << "\t  " << cells[7] << "  |  " << cells[8] << "  |  " << cells[9] << endl;

	cout << "\t     |     |  |  " << endl << endl;
}
void ifWinDiagonal1(char cells[])
{
	system("cls");
	cout << "\n\n\t\tTic Tac Toe\n\n";

	cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "\t     |     |   /  " << endl;
	cout << "\t  " << cells[1] << "  |  " << cells[2] << "  |  " << cells[3] << endl;

	cout << "\t_____|_____|/____" << endl;
	cout << "\t     |    /|     " << endl;

	cout << "\t  " << cells[4] << "  |  " << cells[5] << "  |  " << cells[6] << endl;

	cout << "\t_____|/____|_____" << endl;
	cout << "\t    /|     |     " << endl;

	cout << "\t  " << cells[7] << "  |  " << cells[8] << "  |  " << cells[9] << endl;

	cout << "\t/    |     |     " << endl << endl;
}
void ifWinDiagonal2(char cells[])
{
	system("cls");
	cout << "\n\n\t\tTic Tac Toe\n\n";

	cout << "\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "\t \\   |     |     " << endl;
	cout << "\t  " << cells[1] << "  |  " << cells[2] << "  |  " << cells[3] << endl;

	cout << "\t____\\|_____|_____" << endl;
	cout << "\t     |\\    |     " << endl;

	cout << "\t  " << cells[4] << "  |  " << cells[5] << "  |  " << cells[6] << endl;

	cout << "\t_____|____\\|_____" << endl;
	cout << "\t     |     |\\    " << endl;

	cout << "\t  " << cells[7] << "  |  " << cells[8] << "  |  " << cells[9] << endl;

	cout << "\t     |     |   \\ " << endl << endl;
}
int inspectWin(char cells[])
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
	char cells[10] = { 'o','1','2','3','4','5','6','7','8','9' };

	int player = 1, flag, choice;
	int x;
	char mark;
	system("color f0");
	cout << "\t\t\tEnter 1 to play with computer\t\tEnter 2 to play with friend\n" << endl;
	cin >> x;
	if (x == 1)
	{
		do
		{
			board(cells);

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
				flag = inspectWin(cells);
				player++;
				board(cells);
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
				else if (choice < 1 || choice >9)
				{
					system("color f4");
					cout << "Incorrect input. Restart your program";
					return 0;
				}
				else
				{
					cout << "Invalid move ";
					player--;
				}
				flag = inspectWin(cells);

				player++;
			}
		} while (flag == 2);

		if (cells[1] == cells[2] && cells[2] == cells[3] || cells[4] == cells[5] && cells[5] == cells[6] || cells[7] == cells[8] && cells[8] == cells[9])
		{
			ifWinHorizontal(cells);
		}
		else if (cells[1] == cells[4] && cells[4] == cells[7])
		{
			ifWinVertical1(cells);
		}
		else if (cells[2] == cells[5] && cells[5] == cells[8])
		{
			ifWinVertical2(cells);
		}
		else if (cells[3] == cells[6] && cells[6] == cells[9])
		{
			ifWinVertical3(cells);
		}
		else if (cells[3] == cells[5] && cells[5] == cells[7])
		{
			ifWinDiagonal1(cells);
		}
		else if (cells[1] == cells[5] && cells[5] == cells[9])
		{
			ifWinDiagonal2(cells);

		}
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
	else if (x == 2)
	{
		do
		{
			board(cells);
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
			else if (choice < 1 || choice >9)
			{
				system("color f4");
				cout << "Incorrect input. Restart your program";
				return 0;
			}
			else
			{
				system("color f4");
				cout << "Invalid move ";
				player--;
				cin.ignore();
				cin.get();
				system("color f0");
			}

			flag = inspectWin(cells);

			player++;
		} while (flag == 2);
		if (cells[1] == cells[2] && cells[2] == cells[3] || cells[4] == cells[5] && cells[5] == cells[6] || cells[7] == cells[8] && cells[8] == cells[9])
		{
			ifWinHorizontal(cells);
		}
		else if (cells[1] == cells[4] && cells[4] == cells[7])
		{
			ifWinVertical1(cells);
		}
		else if (cells[2] == cells[5] && cells[5] == cells[8])
		{
			ifWinVertical2(cells);
		}
		else if (cells[3] == cells[6] && cells[6] == cells[9])
		{
			ifWinVertical3(cells);
		}
		else if (cells[3] == cells[5] && cells[5] == cells[7])
		{
			ifWinDiagonal1(cells);
		}
		else if (cells[1] == cells[5] && cells[5] == cells[9])
		{
			ifWinDiagonal2(cells);

		}

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
	else
	{
		system("color f4");
		cout << "Invalid Input";
	}
	return 0;
}