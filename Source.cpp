#include <iostream>
using namespace std;

void findSum(); //func prototype
void myPow(int base, int power); //func prototype

int main()
{
	myPow(3, 2);
	cout << endl << "end of main.";

	return 0;
}

void findSum()
{
	int num1, num2, num3;
	cout << "enter a number: ";
	cin >> num1;
	cout << "enter another number: ";
	cin >> num2;
	num3 = num1 + num2;
	cout << num3;
}

void myPow(int base, int power)
{
	int i = power, answ = base;

	while (i > 0)
	{
		answ = answ * base;
		i--;
	}
	cout << answ;
}
