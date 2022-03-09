#include <iostream>
#include <Windows.h>

void position(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void gride() {

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << std::endl;

	std::cout << "1  2  3" << std::endl;
	std::cout << "4  5  6" << std::endl;
	std::cout << "7  8  9" << std::endl << std::endl;
	
}
void gotoxy(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

}

void cross(int coord)
{
	int x{ 0 }, y{ 0 };
	if (coord == 1) {
		x = 1;
		y = 0;
	}
	else if (coord == 2) {
		x = 8;
		y = 0;
	}
	else if (coord == 3) {
		x = 15;
		y = 0;
	}
	else if (coord == 4) {
		x = 1;
		y = 3;
	}
	else if (coord == 5) {
		x = 8;
		y = 3;
	}
	else if (coord == 6) {
		x = 15;
		y = 3;
	}
	else if (coord == 7) {
		x = 1;
		y = 6;
	}
	else if (coord == 8) {
		x = 8;
		y = 6;
	}
	else if (coord == 9) {
		x = 15;
		y = 6;
	}
	gotoxy(x, y);
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	gotoxy(x, y + 1);
	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
	gotoxy(x, y + 2);
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
}
void gotoxy1(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

}
void null(int coord)
{
	int x{ 0 }, y{ 0 };
	if (coord == 1) {
		x = 1;
		y = 0;
	}
	else if (coord == 2) {
		x = 8;
		y = 0;
	}
	else if (coord == 3) {
		x = 15;
		y = 0;
	}
	else if (coord == 4) {
		x = 1;
		y = 3;
	}
	else if (coord == 5) {
		x = 8;
		y = 3;
	}
	else if (coord == 6) {
		x = 15;
		y = 3;
	}
	else if (coord == 7) {
		x = 1;
		y = 6;
	}
	else if (coord == 8) {
		x = 8;
		y = 6;
	}
	else if (coord == 9) {
		x = 15;
		y = 6;
	}
	gotoxy(x, y);
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
	gotoxy(x, y + 1);
	std::cout << ' ' << '*' << " " << '*' << ' ' << std::endl;
	gotoxy(x, y + 2);
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
}

int main(void)
{
	gride();

	int a;
	int b;
	int c;
	std::cout << "ENTER coord" << std::endl;
	std::cin >> c;

	for (int i = 0; i < c; i++) 
	{
	
		std::cin >> a;
		cross(a);
        std::cin >> b;
        null(b);
		
		
	}
}
