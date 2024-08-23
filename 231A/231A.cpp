//Задача про соревнования по программированнию Пети Васи и кого то ещё
#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int s = 0;
	while (n--) {
		int x, y, z;
		cin >> x >> y >> z;
		if ((x + y + z) >= 2)
			s++;
	}
	cout << s;

	return 0;
}