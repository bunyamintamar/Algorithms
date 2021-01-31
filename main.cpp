#include <iostream>
using namespace std;

void Get_Num(int *num)
{
	cout << "Enter any number : ";
	cin >> *num;
}

void Show_SignOfNum(int *num)
{
	if( *num == 0 )
	{
		cout << "Entered number is ZERO";
	}
	else if( *num > 0 )
	{
		cout << "Entered number is a POSITIVE number";
	}
	else
	{
		cout << "Entered number is a NEGATIVE number";
	}
}

int main(void)
{
	int Number;
	
	Get_Num(&Number);
	Show_SignOfNum(&Number);
	return 0;
}
