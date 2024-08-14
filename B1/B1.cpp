#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;
int partition(int list[], int start, int pivot) {
	int i = start;
	while(i < pivot) {
		if (list[i] > list[pivot] && i == pivot - 1) {
			swap(list[i], list[pivot]);
			pivot--;
		}
		else if (list[i] > list[pivot]) {
			swap(list[pivot - 1], list[pivot]);
			swap(list[i], list[pivot]);
			pivot--;
		}
		else i++;
	}
	return pivot;
}
void quicksort(int list[], int start, int end) {
	if (start < end)
	{
		int pivot = partition(list, start, end);
		quicksort(list, start, pivot - 1);
		quicksort(list, pivot + 1, end);
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n, m;
	cout << "Number of flowers: ";
	cin >> n;
	cout << "\n";
	cout << "Number of money: ";
	cin >> m;
	cout << "\n";
	cout << "Give Array of flowers: ";
	int *flowers = new int[n]; 
	for (int i = 0; i < n; i++) {
		cin >> flowers[i];
	}
	cout << "\n";
	cout << "Your Array: ";
	for (int i = 0; i < n; i++) {
		cout << flowers[i] << " ";
	}
	cout << "\n";
	cout << "Sorted Array of flowers: ";
	quicksort(flowers, 0, n-1);
	for (int i = 0; i < n; i++) {
		cout << flowers[i] << " ";
	}
	int z;
	int* prices = new int[z];
	int price = 0;
	for (int i = 0; i < n; i++) {
		if (flowers[i] >= flowers[i + 1] + 1) {
			price += flowers[i] + flowers[i + 1];
		}
	}
}