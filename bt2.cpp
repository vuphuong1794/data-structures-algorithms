//#include <iostream>
//using namespace std;
//
//bool ktra(int a, int b, int c) {
//	if (a > 0 and b > 0 and c > 0 and a + b > c and a + c > b and b + c > a){
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void cacSo(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i+1; j < n; j++) {
//			for (int k = j+1; k < n; k++) {
//				if (ktra(arr[i], arr[j], arr[k])) {
//					cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	int a, b, c, n, choice, arr[100];
//	do {
//		cout << "1. kiem tra dieu kien tam giac" << endl;
//		cout << "2. in ra bo cac so du dieu kien de lam tam giac" << endl;
//		cin >> choice;
//		switch (choice) {
//		case 1: {
//			cout << "nhap a: ";
//			cin >> a;
//			cout << "nhap b: ";
//			cin >> b;
//			cout << "nhap c: ";
//			cin >> c;
//			if (ktra(a, b, c)) {
//				cout << "3 canh du dieu kien la tam giac" << endl;
//			}
//			else {
//				cout << "khong hop le" << endl;
//			}
//			break;
//		}
//		case 2: {
//			cout << "nhap n: ";
//			cin >> n;
//			for (int i = 0; i < n; i++) {
//				cout << "nhap so thu " << i<<": ";
//				cin >> arr[i];
//			}
//			cacSo(arr, 3);
//		}
//		}
//		
//	} while (choice != 0);
//
//	return 0;
//}