#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

bool is(string num1, string num2) {
	string s1 = num1;
	string s2 = num2;

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	return s1 == s2;
}

int main() {
	string num1, num2;
	cin >> num1 >> num2;

	if (is(num1, num2)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}
