#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int Num1 = 10;
	float Num2 = 1.0f;

	cout << Num1 + 3 << endl;
	cout << Num1 - 3 << endl;
	cout << Num1 * 3 << endl;
	cout << Num1 / 3 << endl;
	cout << Num1 % 3 << endl;

	cout << Num2 + 3.0f << endl;
	cout << Num2 - 3.0f << endl;
	cout << Num2 * 3.0f << endl;
	cout << Num2 / 3.0f << endl;
	cout << std::fmod(Num2, 3.0f) << endl;

	return 0;
}