//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int a[10] = { 1, 2, 3, 4, 9, 10, 5, 6, 8 };
//	vector<int> L(10, 1);
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < i; j++) {
//			if (a[i] > a[j]) {
//				L[i] = max(L[i], L[j] + 1);
//			}
//		}
//	}
//
//	int max_length = L[9 - 1];
//	cout << "day con dai nhat cua mang tren la " << max_length << endl;
//
//	cout << "cac phan tu trong mang con dai nhat la ";
//	bool flag = true;
//	for (int i = 9; i >= 0; i--) {
//		if (L[i] == max_length) {
//			if (!flag) {
//				cout << ", ";
//			}
//			cout << a[i];
//			flag = false;
//			max_length--;
//		}
//	}
//	return 0;
//}