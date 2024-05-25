//#include <iostream>
//using namespace std;
//
//void Try(int pos, int a[], int n, int sum, int tmpsum, bool& flag) {
//	if (sum == tmpsum)
//		flag = true;
//	for (int i = pos; i < n; i++) {
//		if (tmpsum + a[i] <= sum) {
//			tmpsum += a[i];
//			Try(i + 1, a, n, sum, tmpsum, flag);
//			tmpsum -= a[i];
//		}
//	}
//}
//
//int main() {
//	int i, n, M;
//	int a[100];
//	cout << "nhap so phan tu mang: ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "a[" << i << "]= ";
//		cin >> a[i];
//	}
//	cout << "nhap gia tri M: ";
//	cin >> M;
//	bool flag = false;
//	Try(0, a, n, M, 0, flag);
//	if (flag)
//		cout << "co" << endl;
//	else
//		cout << "khong" << endl;
//	return 0;
//}
