//#include <iostream>
//using namespace std;
//
//int n, k;
//int dem = 1;
//int a[100] = { 0 };
//bool  b[100];
//
//void Init() {
//	for (int j = 1; j <= n; j++) {
//		b[j] = true;
//	}
//}
//
//void print_result() {
//	cout << "chinh hop chap " << k << " thu " << dem++ << ": ";
//	for (int i = 1; i <= k; i++) {
//		cout << " " << a[i];
//	}
//	cout << endl;
//}
//
//void Try(int i) {
//	for (int j = 1; j <= n; j++) {
//		if (b[j] == true) {
//			a[i] = j;
//			if (i == k) {
//				print_result();
//			}
//			else {
//				b[j] = false;
//				Try(i + 1);
//				b[j] = true;
//			}
//		}
//	}
//}
//
//int main() {
//
//	n = 5, k = 3;
//	Init();
//	Try(1);
//	return 0;
//}