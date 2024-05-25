//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int MAX = 100;
//int arr[MAX], n, target;
//bool x[MAX];
//
//void printSolution() {
//    for (int i = 0; i < n; i++) {
//        if (x[i]) {
//            cout << arr[i] << " ";
//        }
//    }
//    cout << endl;
//}
//
//void Try(int i, int sum) {
//    if (sum > target) return;
//
//    if (sum == target) {
//        printSolution();
//        return;
//    }
//    if (i == n) return;
//
//    x[i] = true;
//    Try(i + 1, sum + arr[i]);
//    x[i] = false;
//
//    // Skip trùng lặp
//    while (i < n - 1 && arr[i] == arr[i + 1]) {
//        i++;
//    }
//
//    Try(i + 1, sum);
//}
//
//int main() {
//    cout << "nhap n: ";
//    cin >> n;
//    cout << "nhap target: ";
//    cin >> target;
//    for (int i = 0; i < n; i++) {
//        cout << "nhap phan tu thu " << i << ": ";
//        cin >> arr[i];
//    }
//
//    //sort(arr, arr + n);
//
//    Try(0, 0);
//    return 0;
//}
