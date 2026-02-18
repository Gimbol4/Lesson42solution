#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);


	cout << "Input your array elements: ";
	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}

	int n = length / 2;
	for (int index = 0; index < n; index++)
	{
		int temp = array[index];
		array[index] = array[length - 1 - index];
		array[length - 1 - index] = temp;
	}


	cout << "Result array: ";
	for (int index = 0; index < length; index++)
	{
		cout << array[index] << " ";
	}
	return 0;
}