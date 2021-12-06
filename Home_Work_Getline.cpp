#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << " >> Это игра в жанре научная фантастика, в которой герой сражается с людьми, внеземным разумом, сверхкомпьютерами <<" << endl;
	cout << " >> и настолько преисполняется в своем познании, что может созерцать великое фрактальное подобие. <<" << endl;

	string namehero;
	cout << ">> Придумайте имя героя ->> ";
	getline(cin, namehero);
	cout << namehero << endl << endl;

	string racechoice;
	cout << ">> Выберите расу героя. Он может быть человеком, машиной или внеземным разумом ->> ";
	getline(cin, racechoice);
	cout << racechoice << endl << endl;

	string age;
	cout << ">> Укажите возраст героя /Хотя как измерить возраст внеземного разума?/ Укажите в любом случае ->> ";
	getline(cin, age);
	cout << age << endl << endl;

	string selectclass;
	cout << ">> Выберите класс героя. Он может быть свихнувшимся ученым, HEL 9000 или вором ->> ";
	getline(cin, selectclass);
	cout << selectclass << endl << endl;

	cout << "Имя персонажа: " << namehero << endl;
	Sleep(1000);
	cout << "Раса: " << racechoice << endl;
	Sleep(1000);
	cout << "Возраст: " << age << endl;
	Sleep(1000);
	cout << "Класс: " << selectclass << endl << endl << endl;

	Sleep(2000);
	cout << " /ВЫ МЕРТВЫ. Так как ввели параметры анорганического персонажа/ " << endl;
	Sleep(2000);
	cout << " /Шутка/ " << endl;
	Sleep(1000);
	cout << " >> Попробуйте еще раз? << " << endl;

}
