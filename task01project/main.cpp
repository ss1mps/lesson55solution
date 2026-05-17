#include <iostream>
#include <string>
#include "logic.h"

using namespace std;

int main() {
	
	int number;

	cout << "input your number: ";
	cin >> number;

	int count = count_number_digits(number);

	cout << "The count of number digit is " << count << ".\n";

	return 0;
}