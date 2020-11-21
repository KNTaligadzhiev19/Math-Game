#include <iostream>
using namespace std;

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

int main()
{
	char cells[10] = { ' ','1','2','3','4','5','6','7','8','9' };
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