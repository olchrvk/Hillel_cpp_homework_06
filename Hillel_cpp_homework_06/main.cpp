#include<iostream>

using namespace std;

class CPrinter
{
	public:
		void printArray(string array[], int length);
		void printArray(float array[], int length);
		void printArray(char array[], int length);
};

int main()
{
	CPrinter printer;
	const int length = 3;
	
	char chArray[length] = {'y', 'x' ,'z'};
	string strArray[length] = { "one", "two", "three" };
	float fArray[length] = {1.2f, 3.1f, 4.6f};

	printer.printArray(chArray, length);
	printer.printArray(strArray, length);
	printer.printArray(fArray, length);

	return 0;
}

void CPrinter::printArray(string array[], int length)
{
	cout << "String array: ";
	for (int i = 0; i < length; i++) 
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

void CPrinter::printArray(float array[], int length)
{
	cout << "Float array: ";
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

void CPrinter::printArray(char array[], int length)
{
	cout << "Char array: ";
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}