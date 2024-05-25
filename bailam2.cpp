//#include <iostream>
//using namespace std;
//
//const int MAX = 100;
//int arr[MAX], n;
//
//void printFunc(int k) {
//    for (int i = 1; i <= k; i++) {
//        if (i != 1) {
//            cout << "+";
//        }
//        cout << arr[i];
//    }
//    cout << endl;
//}
//
//void Try(int i, int sum) {
//    for (int j = arr[i - 1]; j <= sum; j++) {
//        arr[i] = j;
//        if (j == sum) {
//            printFunc(i);
//        }
//        else {
//            Try(i + 1, sum - j);
//        }
//    }
//}
//
//int main() {
//    do {
//        cout << "nhap target: ";
//        cin >> n;
//        if (n > 30) cout << "vui long nhap target <= 30!!!" << endl;
//    } while (n > 30);
//        arr[0] = 1;
//        cout << "Ket qua: " << endl;
//        Try(1, n);
//    
//    return 0;
//}
