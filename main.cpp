#include <iostream>
using namespace std;

int Show_BiggerOne(int num1, int num2)
{
	return num1>num2 ? num1 : num2;
}

int main(void)
{
	int Num1;
	int Num2;
	
	cout << "Enter first number   : ";
	cin >> Num1;
	cout << "Enter second number  : ";
	cin >> Num2;
	
	cout << "Bigger number is     : " << Show_BiggerOne(Num1,Num2);
	return 0;
}

