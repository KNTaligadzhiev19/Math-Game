#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

void drawLine1(size_t count) 
{
	cout << " ";
	for (size_t i = 0; i < count; i++) 
	{
		cout << '_';
	}
	cout << endl;
}
void drawLineType1(char ch1, char ch2, char ch3) 
{
	cout << "|           |           |__" << ch1 << "__|__" << ch2 << "__|__" << ch3 << "__|           |           |" << endl;
}
void drawLineType2(char ch1, char ch2, char ch3, char ch4, char ch5, char ch6, char ch7) 
{
	cout << "|     " << ch1 << "     |     " << ch2 << "     |__" << ch3 << "__|__" << ch4 << "__|__" << ch5 << "__|     " << ch6 << "     |     " << ch7 << "     |" << endl;
}
void drawLineType3(char ch1, char ch2, char ch3) 
{
	cout << "|___________|___________|__" << ch1 << "__|__" << ch2 << "__|__" << ch3 << "__|___________|___________|" << endl;
}
void drawLineType4_0(char ch1, char ch2, char ch3, char ch4, char ch5, char ch6, char ch7, char ch8, char ch9, char ch10, char ch11, char ch12, char ch13, char ch14, char ch15, char ch16) 
{
	cout << "|_" << ch1 << "_|_" << ch2 << "_|_" << ch3 << "_|_" << ch4 << "_|_" << ch5 << "_|_" << ch6 << "_|            "  << "     |_" << ch11 << "_|_" << ch12 << "_|_" << ch13 << "_|_" << ch14 << "_|_" << ch15 << "_|_" << ch16 << "_|" << endl;
}
void drawLineType4_1(char ch1, char ch2, char ch3, char ch4, char ch5, char ch6, char ch11, char ch12, char ch13, char ch14, char ch15, char ch16) 
{
	cout << "|_" << ch1 << "_|_" << ch2 << "_|_" << ch3 << "_|_" << ch4 << "_|_" << ch5 << "_|_" << ch6 << "_|_________________|_" << ch11 << "_|_" << ch12 << "_|_" << ch13 << "_|_" << ch14 << "_|_" << ch15 << "_|_" << ch16 << "_|" << endl;
}
void drawLineType5_0(char ch1, char ch2, char ch3, char ch4) 
{
	cout << "|   |   |   |   |   |   |     " << ch1 << " " << ch2 << " " << ch3 << " " << ch4 << "     |   |   |   |   |   |   |" << endl;
}
void drawLineType5_1(char ch1, char ch2, char ch3,char ch4) 
{
	cout << "|___|___|___|___|___|___|     " << ch1 << " " << ch2 << " " << ch3 << " " << ch4 << "     |___|___|___|___|___|___|" << endl;
}
void drawLineType6(char ch1, char ch2, char ch3, char ch4, char ch5, char ch6, char ch7, char ch8, char ch9, char ch10, char ch11, char ch12, char ch13, char ch14, char ch15, char ch16, char ch17, char ch18, char ch19, char ch20)
{
	cout << "| " << ch1 << " | " << ch2 << " | " << ch3 << " | " << ch4 << " | " << ch5 << " | " << ch6 << " |  " << ch7 << ch8 << ch9 << ch10 << "     " << ch11 << ch12 << ch13 << ch14 << "  | " << ch15 << " | " << ch16 << " | " << ch17 << " | " << ch18 << " | " << ch19 << " | " << ch20 << " |" << endl;
}

void randomNumber()
{
	srand((unsigned)time(0));
	printf("Your dice has been rolled! You got: \n ");
	int result = 1 + (rand() % 6);
	printf("%d \n", result);

	/*if (result == 6) {
		cout << "Excellent!";
	}
	else if (result == 5) {
		cout << "Cool!";
	}
	else if (result == 4) {
		cout << "Nice!";
	}
	else if (result == 3) {
		cout << "Nice try!"
	}
	else if (result == 2) {
		cout << "Gooood!";
	}
	else {
		cout << "Well!"
	}*/
}

int main() 
{
	char Ludo[104];
	for (char i = 0; i < 104; ++i) 
	{
		Ludo[i] = ' ';
	}
	drawLine1(65);
	drawLineType1(Ludo[26], Ludo[27], Ludo[28]);
	drawLineType2(Ludo[0], Ludo[1], Ludo[25], Ludo[73], Ludo[29], Ludo[4], Ludo[5]);
	drawLineType3(Ludo[24], Ludo[74], Ludo[30]);
	drawLineType1(Ludo[23], Ludo[75], Ludo[31]);
	drawLineType2(Ludo[2], Ludo[3], Ludo[22], Ludo[76], Ludo[32], Ludo[6], Ludo[7]);
	drawLineType3(Ludo[21], Ludo[77], Ludo[33]);
	drawLineType4_0(Ludo[67], Ludo[16], Ludo[17], Ludo[18], Ludo[19], Ludo[20], Ludo[92], Ludo[93], Ludo[94], Ludo[95], Ludo[34], Ludo[35], Ludo[36], Ludo[37], Ludo[38], Ludo[39]);
	drawLineType5_0(Ludo[92], Ludo[93], Ludo[94], Ludo[95]);
	drawLineType6(Ludo[66],Ludo[68], Ludo[69], Ludo[70], Ludo[71], Ludo[72], Ludo[88], Ludo[89], Ludo[90], Ludo[91], Ludo[99], Ludo[98], Ludo[97], Ludo[96], Ludo[82], Ludo[81], Ludo[80], Ludo[79], Ludo[78], Ludo[40]);
	drawLineType5_1(Ludo[100], Ludo[101], Ludo[102], Ludo[103]);
	drawLineType4_1(Ludo[65], Ludo[64], Ludo[63], Ludo[62], Ludo[61], Ludo[60], Ludo[46], Ludo[45], Ludo[44], Ludo[43], Ludo[42], Ludo[41]);
	drawLineType1(Ludo[59], Ludo[87], Ludo[47]);
	drawLineType2(Ludo[12], Ludo[13], Ludo[58], Ludo[86], Ludo[48], Ludo[8], Ludo[9]);
	drawLineType3(Ludo[57], Ludo[85], Ludo[49]);
	drawLineType1(Ludo[56], Ludo[84], Ludo[50]);
	drawLineType2(Ludo[14],Ludo[15], Ludo[55], Ludo[83], Ludo[51], Ludo[10], Ludo[11]);
	drawLineType3(Ludo[54], Ludo[53], Ludo[52]);
	cout << endl;
	randomNumber();
}