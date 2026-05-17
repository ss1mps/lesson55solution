#include <iostream>
#include <string>
#include "logic.h"

using namespace std;

int main() {

	int a, b;

	cout << " Input a, b: ";
	cin >> a >> b;

	bool result = equal(a, b);

	cout << "Result: " << (result ? "Yes" : "No") << ".\n";

	return 0;
}