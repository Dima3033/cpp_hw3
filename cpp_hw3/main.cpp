#include <iostream>
using namespace std;
int ag(int, char);
int main() {
	int num, res;
	char symb;
	cout << "Enter a number -> ";
	cin >> num;
	cout << "Enter a symbol -> ";
	cin >> symb;
	cout << symb;
	res = ag(num, symb);
}
int ag(int num, char symb) {
	if (num < 2)
	{
		return 1;
	}
	cout << ' ' << symb;
	return ag(num - 1, symb);
}