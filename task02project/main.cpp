#include <iostream>
#include <string>
#include "logic.h"

using namespace std;

int main() {

	int x, n;

	cout << "Input x, n: ";
	cin >> x >> n;

	int result = power(x, n);

	cout << x << "^" << n << " = " << result << ".\n";

	return 0;
}