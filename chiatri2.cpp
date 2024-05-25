//#include<iostream>
//using namespace std;
//
//int findMax(int arr[], int left, int right, int n) {
//    int mid = left + (right - left) / 2;
//    cout << "left " << left << " | " << "right " << right << endl;
//    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
//        return arr[mid];
//
//    //kiem tra cac so dang trc co lon hon mid hien tai
//    else if (mid > 0 && arr[mid - 1] > arr[mid])
//        return findMax(arr, left, mid - 1, n);
//
//    //kiem tra cac so dang sau co lon hon mid hien tai
//    else
//        return findMax(arr, mid + 1, right, n);
//}
//
//int main() {
//    int arr[] = { 0, 1, 2, 8, 10, 20, 40, 50, 3, 2, 1 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    cout << "max number in the array is: " << findMax(arr, 0, n - 1, n);
//    return 0;
//}
