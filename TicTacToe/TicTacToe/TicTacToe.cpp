#include <iostream>
using namespace std;

char cells[10] = { 'o','1','2','3','4','5','6','7','8','9' };



int inspectWin()
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

// Function Which Display The Board
void board()
{
    system("color f0");
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

int main()
{
    system("color f7");
    int player = 1, flag, choice;

    char mark;
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
        }
        flag = inspectWin();

        player++;
    } while (flag == 2);
    board();
    if (flag == 1)

        cout << "==>\aPlayer " << --player << " win ";
    else
        cout << "==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}