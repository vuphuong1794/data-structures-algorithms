//#include <iostream> 
//using namespace std;
//int N, X[100], cot[100], d1[100], d2[100];
//int a[100][100];
//
//void in_kq() {
//	memset(a, 0, sizeof(a));
//	for (int i = 1; i <= N; i++) {
//		a[i][X[i]] = 1;
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cout << a[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void Try(int i) {
//	for (int j = 1; j <= N; j++) {
//		if (cot[j] == 1 && d1[i - j + N] == 1 && d2[i + j - 1] == 1) {
//			X[i] = j;
//			cot[j] = d1[i - j + N] = d2[i + j - 1] = 0;
//			if (i == N) in_kq();
//			else {
//				Try(i + 1);
//			}
//			cot[j] = d1[i - j + N] = d2[i + j - 1] = 1;
//		}
//	}
//}
//
////xep hau
//int main() {
//	cout << "nhap N: ";
//	cin >> N;
//
//	for (int i = 0; i <= 99; i++) {
//		cot[i] = d1[i] = d2[i] = 1;
//	}
//	Try(1);
//	return 0;
//}