//#include <iostream>
//using namespace std;
//
//int used[100], a[100];
//int x[100], n;
//
//void print_result() {
//    for (int i = 1; i <= n; i++) {
//        cout << x[i];
//    }
//    cout << endl;
//}
//
//void Try(int i) {
//	for (int j = 1; j <= n; j++) {
//		if (used[j] == 0) {
//			x[i] = j;
//			used[j] = 1;
//
//			if (i == n) {
//				print_result();
//			}
//			else {
//				Try(i + 1);
//			}
//			used[j] = 0;
//		}
//	}
//}
//
////hoán vị 123 
//int main() {
//	cout << "nhap n: ";
//	cin >> n;
//	Try(1);
//	return 0;
//}