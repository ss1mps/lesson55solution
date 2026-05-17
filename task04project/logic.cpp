#include "logic.h"

int recursion(int a, int b) {
	if (a == b) {
		return true;
	}
	if (a == 0 || b == 0) {
		return false;
	}

	int digit = a % 10;

	return recursion(a /= 10, b - digit);
}

bool equal(int a, int b) {
	if (a < 0 || b < 0) {
		return false;
	}

	return recursion(a, b) == b;
}