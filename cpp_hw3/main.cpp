#include <iostream>
using namespace std;
int ag(int, int);
int main() {
	int num, step, res;
	cout << "Enter a number -> ";
	cin >> num;
	cout << "Enter a number -> ";
	cin >> step;
	res = ag(num, step);
	cout << num << " ^ " << step << " = " << res;
}

int ag(int num, int step) {
	if (step != 0)
	{
		return(num * ag(num, step - 1));
	}
	else
	{
		return 1;
	}
}