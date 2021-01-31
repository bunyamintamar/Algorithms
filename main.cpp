#include <iostream>
using namespace std;

void Get_Fahrenheit(int *f)
{
	cout << "Enter fahrenheit : ";
	cin >> *f;
}

int ConverToCelcius(int f)
{
	return (int)(  (float)(f-32) * (5.0/9.0)  );
}

int main(void)
{
	int Fahrenheit, Celcius;
	
	Get_Fahrenheit(&Fahrenheit);
	cout << "Celcius          : " << ConverToCelcius(Fahrenheit);
	return 0;
}

