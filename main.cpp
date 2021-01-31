#include <iostream>
#include <math.h>

using namespace std;

void Get_Roots(float a, float b, float c, float *r1, float *r2)
{
	float delta = (float)pow((double)b,2) - 4 * a * c;
	
	if( delta > 0 )
	{
		*r1 = ( -b + (float)sqrt((double)delta) ) / (2*a);
		*r2 = ( -b - (float)sqrt((double)delta) ) / (2*a);
		cout << "Different roots" << endl;
	}
	else if( delta == 0 )
	{
		*r1 = -b / (2*a);
		*r2 = *r1;
		cout << "Double roots" << endl;
	}
	else
	{
		cout << "No real roots" << endl;
	}
}

int main(void)
{
	float a,b,c,r1,r2;
	
	cout << "aX^2 + bX + c" << endl;
	
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	cout << "c : ";
	cin >> c;
	
	Get_Roots(a,b,c,&r1,&r2);
	cout << "r1 : " << r1 << endl << "r2 : " << r2;
	return 0;
}

