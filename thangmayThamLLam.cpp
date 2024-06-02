//#include <iostream>
//using namespace std;
//
//int main() {
//	int n, k, a[100], temp;
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) cin >> a[i];
//
//	//sap xep thu tu di
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i; j < n; j++) {
//			if (a[i] > a[j]) {
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	int res = 0;
//
//	for (int i = 0; i < n; i += k) {
//		cout << "a[i] - 1 :" << a[i] - 1 << endl;
//		res += 2 * (a[i] - 1);
//	}
//	cout << res;
//
//	return 0;
//}