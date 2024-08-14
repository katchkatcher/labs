#include <iostream>
#include <string>

using namespace std;
int main() {
	string i, r;
	int n;
	cin >> n;
	while(n--) {
		cin >> i;
		if (i.length() > 10) {
			r = i[0] + to_string(i.length() -2) + i[i.length() - 1];
			cout << r << endl;
		}
		else {
			cout << i<< endl;
		}
	}
	return 0;
}