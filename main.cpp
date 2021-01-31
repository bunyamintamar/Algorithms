#include <iostream>
using namespace std;

void Get_numbers(int count, int *num)
{
	cout << "Enter " << count+1 << ". number : ";
	cin >> *num;
}

void Calculate(int count, int num, float *avg, int *ttl)
{
	*ttl = *ttl + num;
	*avg = (float)(*ttl) / (float)(count+1);
}

int main(void)
{
	int counter, number, total;
	float average;
	
	for( counter = 0; counter < 5; counter++ )
	{
		Get_numbers(counter, &number);
		Calculate(counter,number,&average,&total);
	}
	cout << "Average : " << average << endl << "Total   : " << total;
	return 0;
}

