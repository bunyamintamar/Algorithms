#include <iostream>
using namespace std;

void Get_Name(char *name)
{
	cout << "Your name : ";
	cin >> name;
}

void Show_Name_10_Times(char *name)
{
	int counter;
	for( counter = 0; counter < 10; counter++ )
	{
		cout << name << endl;
	}
}

int main(void)
{
	char Name[20];
	
	Get_Name(Name);
	Show_Name_10_Times(Name);
	
	return 0;
}

