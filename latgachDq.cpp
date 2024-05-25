//#include <iostream>
//using namespace std;
//
//int count(int n) {
//	if (n == 1 || n == 2) return n;
//	else {
//		return count(n - 1) + count(n - 2);
//	}
//}
//int main() {
//    int T; cin >> T;
//    int a[100];
//    for (int i = 0; i < T; ++i) {
//        int n;
//        cin >> n;
//        a[i] = count(n);
//    }
//    for (int i = 0; i < T; ++i) {
//        cout << '\n' << a[i];
//    }
//    return 0;
//}