#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
	vector <char> myVector;						/*!< Define a vector of type char */
	vector <char>::iterator myIterator;			/*!< Define an iterator for vector of type char */
	int Index = 0;
	
	cout << "ENGLISH LETTERS" << endl;
	cout << "A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   X   V   W   Y   Z" << endl;
	cout << "^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^   ^" << endl;
	cout << "0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25" << endl << endl;

	/** -PUSH_BACK EXAMPLE */
	for(int i=0; i<=20; i++)					/*!< 21-round loop */
	{
		myVector.push_back(i+65);				/*!< Capital letters to the vector */
	}
	
	/** -SIZE EXAMPLE */	
	cout << "Size of the vector                 : " << myVector.size() 	<< endl;								/*!< Size of the vector */
	
	/** -END EXAMPLE */
	cout << endl;
	cout << "End member                         : " << *(myVector.end()-1)	<< " (with END function)" << endl;	/*!< The element at the end of vector WITH END function */
	
	/** ITERATOR EXAMPLE */
	myIterator = (myVector.end()-1);																			/*!< Last address to iterator */
	
	cout << "End member                         : " << *myIterator << " (with ITERATOR)" << endl;				/*!< The element at the end of vector WITH END function */

	/** -BEGIN EXAMPLE */
	Index		= 0;
	myIterator	= myVector.begin() + Index;																		/*!< Begin address to iterator */
	cout << endl;
	cout << "First member                       : " << *myIterator				<< endl;						/*!< Show the first member 		(letter A) */
											
	/** INCREASE ITERATOR EXAMPLE */										
	myIterator++;																								/*!< Increase the iterator */
	cout << "Second member                      : " << *myIterator				<< endl;						/*!< Show the second member 	(letter B) */
											
	/** INCREASE ITERATOR EXAMPLE (with index) */										
	Index++; /*  1  */										
	myIterator	= myVector.begin() + Index;											
	cout << "Second member                      : " << *myIterator				<< endl;						/*!< Show the second member 	(letter B) */
											
	Index = 2;										
	myIterator	= myVector.begin() + Index;										
	cout << "Third member                       : " << *myIterator	<< endl;									/*!< Show the third member 		(letter C) */
												
	/** ARRAY NUMBER EXAMPLE */											
	cout << "Third member                       : " << myVector[3]				<< endl;						/*!< Show the forth member 		(letter D) */
												
	/** INCREASE BEGIN ADDRESS EXAMPLE */											
	cout << "Fifth member                       : " << *(myVector.begin() + 4)	<< endl;						/*!< Show the fifth member 		(letter E) */
												
	/** DECREASE END ADDRESS EXAMPLE */
	cout << endl;
	cout << "End member before resizing         : " << *(myVector.end() - 1) 	<< endl;						/*!< Show the end member 		(letter U) */
											
	/** -RESIZE EXAMPLE */										
	myVector.resize(20);																						/*!< Resize the vector to 20 */
	cout << "Size of the vector after resizing  : " << myVector.size() 	<< endl;								/*!< Size of the vector */
											
	/** DECREASE END ADDRESS EXAMPLE */										
	cout << "End member after resizing          : " << *(myVector.end() - 1) 	<< endl;						/*!< Show the end member 		(letter T) */
										
	/** -INSERT EXAMPLE */
	cout << endl;	
	cout << "Old member at seventh cell         : " << myVector[6] << endl;										/*!< Show seventh member 		(letter G) */
	myIterator = myVector.begin() + 6;			
	cout << "Inserted member at seventh cell    : " << *(myVector.insert(myIterator,'X')) << endl;				/*!< Insert X to seventh cell 	(letter X) */
	
	/** -POP_BACK EXAMPLE */
	cout << endl;
	myVector.pop_back();																						/*!< Remove end member			(letter T) */
	cout << "End member after removing          : " << *(myVector.end() - 1)	<< endl;						/*!< Show end member			(letter S) */
	
	/** -ERASE EXAMPLE */
	cout << endl;
	cout << "Second member before erasing       : " << *(myVector.begin() + 1)	<< endl;						/*!< Show second member			(letter B) */
	cout << "Third member before erasing        : " << *(myVector.begin() + 2)	<< endl;						/*!< Show third member			(letter C) */
	cout << "Forth member before erasing        : " << *(myVector.begin() + 3)	<< endl;						/*!< Show forth member			(letter D) */
	
	cout << endl;
	cout << "ERASE second and third members (B and C)" << endl;
	myVector.erase(myVector.begin() + 1, myVector.begin() + 3);													/*!< Erase 1. and 2. cell		(letter B,C) */
	
	cout << endl;
	cout << "Second member after erasing        : " << *(myVector.begin() + 1)	<< endl;						/*!< Show second member			(letter D) */
	cout << "Third member after erasing         : " << *(myVector.begin() + 2)	<< endl;						/*!< Show third member			(letter E) */
	cout << "Forth member after erasing         : " << *(myVector.begin() + 3)	<< endl;						/*!< Show forth member			(letter F) */
	
	/** -CLEAR EXAMPLE */
	cout << endl;
	cout << "CLEAR vector members" << endl;
	myVector.clear();																							/*!< clear all member except 0. cell (letter A) */
	cout << "Size of the vector                 : " << myVector.size() << endl;
	cout << endl;
	cout << "There is only one member at first cell after clearing !" << endl;
	cout << "1. member                          : " << myVector[0] << endl;
	
	return 0; 
}
