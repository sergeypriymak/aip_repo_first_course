#include <iostream>

using namespace std;


int main() {
	string in;
	cin >> in;

	in.append("a");

	char lc = in[0];
	int repl = 1;
	for (int i = 1; i < in.length(); i += 1) {
		if (in[i] == lc) {
			repl += 1;
			continue;
	}

		if (in[i] != lc) {
			cout << lc;
			if (repl > 1)
				cout << repl;

			lc = in[i];
			repl = 1;
		}
	}
	return 0;
}
