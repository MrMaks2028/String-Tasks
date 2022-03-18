#include <iostream>
#include <string>
using namespace std;

string repeatStr(string s, int n);
int compareStr(string s1, string s2);
bool checkSpam(string s);

int main() {
	setlocale(LC_ALL, "Russian");
	string str;

	/*//Задача 1
	cout << "Задача 1.\nВведите строку:\n";
	getline(cin, str);
	cout << repeatStr(str, 5) << "\n\n";*/

	/*//Задача 2
	cout << "Задача 2.\nВведите первую строку:\n";
	getline(cin, str);
	string str2;
	cout << "Введите вторую строку:\n";
	getline(cin, str2);
	cout << compareStr(str, str2) << "\n\n";*/

	//Задача 3
	cout << "Задача 3.\nВведите строку: ";
	getline(cin, str);
	if (checkSpam(str))
		cout << "Обнаружен спам!\n\n";
	else
		cout << "Спама не обнаружено.\n\n";


	return 0;
}
//Задача 1
string repeatStr(string s, int n) {
	string newS;
	for (int i = 0; i < n; i++)
		newS += s;
	return newS;
}
//Задача 2
int compareStr(string s1, string s2) {
	if (s1.size() > s2.size())
		return 1;
	if (s1.size() < s2.size())
		return -1;
	return 0;
}
//Задача 3
bool checkSpam(string s) {
	string newS;
	for (int i = 0; i < s.size(); i++)
		newS += tolower(s[i]);
	if (newS.find("100% free") < newS.size())
		return true;
	if (newS.find("sales increase") < newS.size())
		return true;
	if (newS.find("only today") < newS.size())
		return true;
	return false;
}