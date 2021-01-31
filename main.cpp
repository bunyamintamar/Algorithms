#include <iostream>
using namespace std;

int isThisOdd(int num)
{
	return (num%2) ? num : -1;
}

void Show_Odd_Numbers_Between_0_100(void)
{
	int number;
	for(number = 0; number <= 100; number++)
	{
		if( isThisOdd(number) != -1 )
		{
			cout << number << endl;
		}
	}
}

int main(void)
{
	Show_Odd_Numbers_Between_0_100();
	return 0;
}

