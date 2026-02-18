#include "test.h"

void test1() {
	int number = 8;
	string expected = "1 2 4";

	string actual = calc_divine(number);

	string result = expected == actual ? "Pass" : "Fail";
	cout << "Test1 - " << result << endl;
}

void test2() {
	int number = 12;
	string expected = "1 2 3 4 6";

	string actual = calc_divine(number);

	string result = expected == actual ? "Pass" : "Fail";
	cout << "Test2 - " << result << endl;
}

void test3() {
	int number = 125;
	string expected = "1 5 25";

	string actual = calc_divine(number);

	string result = expected == actual ? "Pass" : "Fail";
	cout << "Test3 - " << result << endl;
}

void test4() {
	int number = 1;
	string expected = "1";

	string actual = calc_divine(number);

	string result = expected == actual ? "Pass" : "Fail";
	cout << "Test4 - " << result << endl;
}

void test5() {
	int number = -3;
	string expected = "Error.";

	string actual = calc_divine(number);

	string result = expected == actual ? "Pass" : "Fail";
	cout << "Test5 - " << result << endl;
}