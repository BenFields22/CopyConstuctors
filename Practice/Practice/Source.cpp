#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
	ArrayTest first(5, 4.3);
	ArrayTest second = first;
	cout << "Printing first array:" << endl;
	first.print();
	cout << "\n\nPrinting second array" << endl;
	second.print();

	cout << "Assigning value of 6.7 to second array" << endl;
	second.setValue(6.7);

	cout << "Printing first array:" << endl;
	first.print();
	cout << "\n\nPrinting second array" << endl;
	second.print();

	system("PAUSE");
	return 0;
}