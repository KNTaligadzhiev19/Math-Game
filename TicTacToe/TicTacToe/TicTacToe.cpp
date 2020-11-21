#include <iostream>
using namespace std;
char cells[10] = { ' ','1','2','3','4','5','6','7','8','9' };
void DrawBoardtype1() {
	cout << "     |     |     " << endl;
}
void DrawBoardtype2(char ch1, char ch2, char ch3) {
	cout << "  " << ch1 << "  |  " << ch2 << "  |  " << ch3 << endl;
}
void DrawBoardtype3() {
	for (int i = 1; i <= 3; i++) {
		if (i == 3) cout << "_____" << endl;
		else cout << "_____|";
	}
}
void DrawBoardtype4() {
	for (int i = 1; i <= 3; i++) {
		if (i == 3) cout << "      " << endl;
		else cout << "     |";
	}
}
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

int main()
{
	
	DrawBoardtype1();
	DrawBoardtype2(cells[1], cells[2], cells[3]);
	DrawBoardtype3();
	DrawBoardtype4();
	DrawBoardtype2(cells[4], cells[5], cells[6]);
	DrawBoardtype3();
	DrawBoardtype4();
	DrawBoardtype2(cells[7], cells[8], cells[9]);
	DrawBoardtype1();
}