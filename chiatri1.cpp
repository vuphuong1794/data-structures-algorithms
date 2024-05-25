//#include<iostream>
//using namespace std;
//
//bool x[100];
//void merge(int arr[], int l, int m, int r) {
//    int i, j, k;
//    int n1 = m - l + 1;
//    int n2 = r - m;
//
//    int L[100], R[100];
//
//    for (i = 0; i < n1; i++)
//        L[i] = arr[l + i];
//    for (j = 0; j < n2; j++)
//        R[j] = arr[m + 1 + j];
//
//    i = 0;
//    j = 0;
//    k = l;
//    while (i < n1 && j < n2) {
//        if (L[i] <= R[j]) {
//            arr[k] = L[i];
//            i++;
//        }
//        else {
//            arr[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//
//    while (i < n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    while (j < n2) {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int arr[], int l, int r) {
//    if (l < r) {
//        int m = l + (r - l) / 2;
//
//        mergeSort(arr, l, m);
//        mergeSort(arr, m + 1, r);
//
//        merge(arr, l, m, r);
//    }
//}
//
////tuyen tinh
//int count_x(int a[], int size, int x) {
//    int count = 0;
//    for (int i = 0; i < size; i++) {
//        if (a[i] == x) count++;
//    }
//    return count;
//}
//
////nhi phan
//int count_np(int a[], int left, int right, int x) {
//    int count = 0;
//    if (left == right) return count;
//    int mid = (left + right) / 2;
//    if (a[mid] == x) count++;
//    int arr_left = count_np(a, left, mid, x);
//    int arr_right = count_np(a, mid + 1, right, x);
//    return count;
//}
//
//
//int max(int a, int b) {
//    return a > b ? a : b;
//}
//
//int max_mang(int a[], int left, int right) {
//    if (left == right) return a[left];
//    int mid = (left + right) / 2;
//    int max_left = max_mang(a, left, mid);
//    int max_right = max_mang(a, mid + 1, right);
//    return max(max_left, max_right);
//}
//
//int chiso_np(int a[], int left, int right, int b) {
//    if (left == right) return -1;
//    int mid = (left + right) / 2;
//    if (mid == b) return a[mid];
//    int arr_left = count_np(a, left, mid, b);
//    int arr_right = count_np(a, mid + 1, right, b);
//    return mid;
//}
//
//int maxSubArraySum(int a[], int size) {
//    int max_so_far = a[0];
//    int curr_max = a[0];
//
//    for (int i = 1; i < size; i++) {
//        curr_max = max(a[i], curr_max + a[i]);
//        max_so_far = max(max_so_far, curr_max);
//    }
//    return max_so_far;
//}
//
//void printArray(int A[], int size) {
//    int i;
//    for (i = 0; i < size; i++)
//        cout << A[i] << " ";
//    //cout << "\nthe largest Number in the array is: " << A[size - 1];
//    cout << endl;
//}
//
//
//int main() {
//    int x, b;
//    int arr[] = { 5,6,7,11,12,13,15 };
//    int arr_size = sizeof(arr) / sizeof(arr[0]);
//    /*
//    mergeSort(arr, 0, arr_size - 1);
//    cout << "nhap phan tu can tim: ";
//    cin>>x;
//    cout << "nhap chi so cua phan tu ma ban muon tim: ";
//    cin >> b;
//    cout << "chi so " << b << " trong mang la so: " << chiso(arr, arr_size, b)<<endl;
//    cout << "so la x xuat hien trong mang: " << count_x(arr, arr_size, x) << endl;
//    cout << "\nSorted array is \n";
//    cout << "tong lon nhat cua cac phan tu lien tiep trong mang co tong lon nhat: " << maxSubArraySum(arr, arr_size);
//    printArray(arr, arr_size);
//    */
//    cout << "nhap b: ";
//    cin >> b;
//    cout << "so phan tu: " << count_np(arr, 0, arr_size, b);
//
//    return 0;
//}
