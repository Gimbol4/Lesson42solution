#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	reverse(array, length);

	cout << "Input your array elements: ";
	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}

	cout << "Result array: ";
	for (int index = 0; index < length; index++)
	{
		cout << array[index] << " ";
	}
	return 0;
}

