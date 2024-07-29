#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k = 0;
		int minD[11]{};
		int x1, x2, x3;
		cin >> x1;
		cin >> x2;
		cin >> x3;
		for (int a = 0; a <=10 ; a++) {
			int D;
			D = abs(a - x1) + abs(a - x2) + abs(a - x3);
			minD[k] = D;
			k++;
		}
		int min = minD[0];
		for (int g = 0; g < 11; g++) {
			if (minD[g] < min) {
				min = minD[g];
			}
		}
		cout << min << "\n";
	}
	return 0;
}