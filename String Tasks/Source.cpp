#include <iostream>
#include <string>
using namespace std;

string repeatStr(string s, int n);
int compareStr(string s1, string s2);
bool checkSpam(string s);

int main() {
	setlocale(LC_ALL, "Russian");
	string str;

	/*//������ 1
	cout << "������ 1.\n������� ������:\n";
	getline(cin, str);
	cout << repeatStr(str, 5) << "\n\n";*/

	/*//������ 2
	cout << "������ 2.\n������� ������ ������:\n";
	getline(cin, str);
	string str2;
	cout << "������� ������ ������:\n";
	getline(cin, str2);
	cout << compareStr(str, str2) << "\n\n";*/

	//������ 3
	cout << "������ 3.\n������� ������: ";
	getline(cin, str);
	if (checkSpam(str))
		cout << "��������� ����!\n\n";
	else
		cout << "����� �� ����������.\n\n";


	return 0;
}
//������ 1
string repeatStr(string s, int n) {
	string newS;
	for (int i = 0; i < n; i++)
		newS += s;
	return newS;
}
//������ 2
int compareStr(string s1, string s2) {
	if (s1.size() > s2.size())
		return 1;
	if (s1.size() < s2.size())
		return -1;
	return 0;
}
//������ 3
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