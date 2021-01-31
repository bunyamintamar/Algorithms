#include <iostream>
using namespace std;

void Get_Exam_Grade(int* midterm, int* final)
{
	cout << "Enter midterm exam grade : ";
	cin >> *midterm;
	cout << "Enter final exam grade   : ";
	cin >> *final;
}

int Calculate_Average(int midterm, int final)
{
	return (int)((float)midterm * 0.4 + (float)final * 0.6);
}

int main(void)
{
	int Midterm, Final;
	
	Get_Exam_Grade(&Midterm,&Final);
	if( Calculate_Average(Midterm, Final) >= 60 )
	{
		cout << "PASSED!";
	}
	else
	{
		cout << "NOT PASSED!";
	}
	return 0;
}

