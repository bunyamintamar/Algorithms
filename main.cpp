#include <iostream>
using namespace std;

void Get_Price(float *price)
{
	cout << "Enter price : ";
	cin >> *price;
}

void Add_Tax(float *price)
{
	
	*price = *price * 1.18;
}

void Show_New_Price(float *New)
{
	cout << "New price with tax : " << *New;
}

int main(void)
{
	float Price;
	
	Get_Price(&Price);
	Add_Tax(&Price);
	Show_New_Price(&Price);
	return 0;
}

