#include <iostream>
#include <string>
using namespace std;


int main() {

	int x;
	string A;
	string B;
	cin >> x;
	while (x > 0) {
		int AA = (x - 1) % 26;
		A = 'A' + AA;
		B = B + A;
		x = (x - 1) / 26;
	}
	for (int i = (B.size() - 1); i >= 0; i--)
		cout << B[i];
	return 0;
}
