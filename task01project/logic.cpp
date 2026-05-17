#include "logic.h"

int recursion(int number) {
	if (number < 10) {
		return 1;
	}

	return count_number_digits(number / 10) + 1;

}

int count_number_digits(int number) {
	if (number < 0) {
		number *= -1;
	}

	return recursion(number);
}