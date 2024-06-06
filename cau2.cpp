#include <iostream>
#include <cmath>
using namespace std;

int lowestCost(int doCao[], int n, int k) {
	int arr[100];
	//gan gia tri cho tat ca phan tu trong mang bang INT_MAX
	//tranh gia tri khong hop le
	for (int i = 0; i < n; i++) {
		arr[i] = INT_MAX;
	}
	arr[0] = 0;

	//khong duoc nhay qua k 
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j <= i + k && j < n; j++) {
			//tim va lay phan tu nho nhat trong pham vi k buoc
			arr[j] = min(arr[j], arr[i] + abs(doCao[i] - doCao[j]));
		}
	}
	return arr[n - 1];
}

int main() {
	int n, k;
	int doCao[100];
	cout << "Nhap n va k (n, k > 0): ";
	cin >> n >> k;

	for (int i = 0; i < n; ++i) {
		cout << "Nhap do cao cua vien da " << i+1 << " (do cao >= 0) : ";
		cin >> doCao[i];
	}
	cout << "\nket qua: " << lowestCost(doCao, n, k) << endl;
	return 0;
}
