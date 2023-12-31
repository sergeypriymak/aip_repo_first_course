#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double pi = pow(12, 0.5) * (1 - (1/pow(3,2)) + (1/(5 * pow(3, 2))) - (1 / (7 * pow(3, 3))) + (1/(9*pow(3, 4))) - (1 / (11*pow(3, 5))));
	
	cout << std::setprecision(16) <<pi;
	
	return 0;
}
