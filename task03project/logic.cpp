#include "logic.h"

int recursion(int array[], int size) {
	if (size == 1) {
		return array[0];
	}

	size--;

	return recursion(array, size) + array[size];
}

int sum(int array[], int size) {
	if (size <= 0 || array == nullptr) {
		return 0;
	}
	return recursion(array, size);
}