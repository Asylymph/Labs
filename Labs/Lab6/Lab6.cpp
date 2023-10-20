
/* ЗАДАНИЕ(общее для всех)
1)	Дана строка, в которой имеется пара круглых скобок и текст внутри этих скобок.Удалите из строки все символы,
находящиеся внутри круглых скобок, и сами круглые скобки.Вместо точки в конце строки вставьте многоточие.Напечатайте полученную строку.
2)	Введите строку.Найдите сколько букв «а»(можно взять любую другую) в этой строке,
посчитайте длину строки и посчитайте какую долю(в процентах) от всех символов строки составляет буква «а».
3)	Введите разными строками свою фамилию, имя и отчество.Выведите на экран свою фамилию и инициалы,
разделенные точками, одной строкой.
4)	Введите имена учеников в группе(до 10).Посчитайте у скольких учеников в группе имя начинается на «А».
Сколько учеников в группе имеют одинаковые имена ?
*/
#include <clocale>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
string text;
int main() {
	srand(time(NULL));
	setlocale(LC_CTYPE, "rus");

	// (1)
	string a = "The moon( is) shining(, today).";
	cout << a << "\n";
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '(') {
			int pos = a.find(')', i);
			a.erase(i, pos - i + 1);
		}
	}
	a.insert(a.length(), "..");
	cout << a;

	// (2)
	cout << text << "\n" << "Введите текст, чтобы посчитать кол-во букв 'a' в строке\n";
	getline(cin,text);
	cout << text.length();
	float percent = 0;
	float counter = 0;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'a') counter++;
	}
	percent = (counter / text.length())*100;
	cout << "Кол-во букв 'a' = " << counter << "\nДоля букв 'a' в строке = " << percent << "%\n";

	// (3)
	cout << "Ââåäèòå ðàçíûìè ñòðîêàìè ñâîþ ôàìèëèþ, èìÿ è îò÷åñòâî.\n";
	string f, n, ln;
	getline(cin, f);
	getline(cin, n);
	getline(cin, ln);
	cout << f + "." + n[0] + "." + ln[0] << "\n";

	// (4)
	int stat = 0;
	int rep = 0;
	char list[10][20] = { "Arkhip", "Kirill", "Alexey", "Manvel", "Ivan", "Dmitriy", "Alexey", "Manvel" , "Genadiy" , "Manvel" };
	for (int i = 0; i < 10; i++) {
		if (list[i][0] == 'A') {
			rep++;
		}

	}
	cout << "Кол-во учеников в группе которых имя начинается на «А» = " << rep << "\n";
	string xlist[] = { "Arkhip", "Kirill", "Alexey", "Manvel", "Ivan", "Dmitriy", "Alexey", "Manvel" , "Manvel" , "Manvel" };
	int k = 0;
	for (int i = 0; i < 10; i++) {
		if (k < stat) {
			stat++;
		}
		k = stat;
		for (int j = i + 1; j < 10; j++) {
			if (xlist[i] == xlist[j]) {
				xlist[j] = j;
				stat++;
				cout << "i = " << i << ", j = " << j << "\n";
			}

		}
	}
	cout << "Кол-во учеников в группе которых имя начинается на «А» = " << rep << "\nКол-во учеников с одинаковыми именами = " << stat;
}