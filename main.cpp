#include <iostream>
using namespace std;

void Get_Num(int *num)
{
	cout << "Enter a number          : ";
	cin >> *num;
}

void Calculate_Factorial(int num)
{
	int counter, factorial;
	
	factorial = 1;
	
	for(counter = 1; counter <= num; counter++ )
	{
		factorial = factorial * counter;
	}
	
	cout << "Factorial of the number : " << factorial;
}

int main(void)
{
	int Number;
	
	Get_Num(&Number);
	Calculate_Factorial(Number);
	return 0;
}

