//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int max_diff(int arr[], int low, int high) {
//	if (high == low)
//		return 0;
//	int mid = (low + high) / 2;
//	int left_diff = max_diff(arr, low, mid);
//	int right_diff = max_diff(arr, mid + 1, high);
//	int min_left = *min_element(arr + low, arr + mid + 1);
//	int max_right = *max_element(arr + mid + 1, arr + high + 1);
//	int cross_diff = max_right - min_left;
//	return max({ left_diff, right_diff, cross_diff });
//}
//
//
//int main() {
//
//	int a[100] = { 1,2,3,4,5,6 };
//	int n = 0;
//
//	cout << "Nhap n: ";
//	while (n < 1) {
//		cin >> n;
//		if (n < 1) {
//			cout << "Khong hop le, nhap lai: ";
//		}
//	}
//
//	bool same = 0;
//	for (int i = 0; i < n; i++) {
//		do {
//			cout << "Nhap chuoi A[" << i << "]: ";
//			cin >> a[i];
//			same = 0;
//			for (int u = 0; u < i; u++) {
//				if (a[u] == a[i]) {
//					cout << "Trung lap!" << endl;
//					same = 1;
//					break;
//				}
//			}
//		} while (same == 1);
//	};
//	cout << max_diff(a,0, n-1);
//    return 0;
//}