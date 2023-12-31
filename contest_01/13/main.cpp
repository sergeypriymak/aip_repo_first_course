#include <iostream>

using namespace std;

int main() {

	int a, x, y, max, min;
	x = 0;
	y = 0;
	max = 1;
	min = 0;
	cin >> a;
	if (a >= 1 && a <= 1000) {
		for (int i = 1; i <= a; i++) {
			if (x < y) {
				cout << i << " ";
				x++;
			}
			else if (x == y) {
				cout << i << endl;
				y++;
				x = 0;
			}
			if (y == max) {
				max++;
				for (int j = ++i; j <= a; j++) {
					if (x < y) {
						cout << j << " ";
						x++;
						i = j;
					}
					else if (x == y) {
						cout << j << endl;
						y--;
						x = 0;
						if (y == min || j == a) {
							i = j;
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}
