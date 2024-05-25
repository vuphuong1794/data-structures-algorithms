//#include <iostream>
//using namespace std;
//
//void print_result(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << a[i];
//    }
//    cout << endl;
//}
//
//void Try(int i, int a[], int n) {
//    for (int j = 0; j <= 1; j++) {
//        a[i] = j;
//        cout << "i: " << i << " j: " << j << endl;
//        if (i == n - 1) {
//            cout << i << " = " << n - 1 << endl;
//
//            print_result(a, n);
//        }
//        else {
//            cout << "thu i+1: " << i + 1 << " j: " << j << endl;
//            Try(i + 1, a, n);
//
//        }
//    }
//}
//void try2(int i, int a[], int n) {
//    for (int j = 0; j <= 1; j++) {
//        a[i] = j;
//        if (i == n - 1) print_result(a, n);
//        else {
//            try2(i + 1, a, n);
//        }
//    }
//
//}
//
//int main() {
//    int a[10];
//    int n = 3;
//    try2(0, a, 3);
//
//    return 0;
//}
//
//
