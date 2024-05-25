//#include<iostream>
//using namespace std;
//
////de quy 
//int UCLN(int a, int b) {
//	a = abs(a);
//	b = abs(b);
//	if (b == 0) {
//		return a;
//	}
//	else {
//		return UCLN(b, a % b);
//	}
//}
//
////ko de quy 
//int UCLN2(int a, int b)
//{
//	while (a != b)
//	{
//		if (a > b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//
//	return a; // or return b; a = b
//}
//
//int UCLN3(int a, int b, int c) {
//	return UCLN(a, UCLN(b,c));
//}
//
//int BCNN(int a, int b) {
//	return abs(a * b) / UCLN(a, b);
//}
//
//int BCNN_mang(int a[], int n) {
//	if (n == 1) {
//		return a[n];
//	}
//	return BCNN(a[n - 1], BCNN_mang(a, n - 1));
//}
//
//int main() {
//	int n, a, b, choice;
//	do {
//		cout << "1. UCLN 2 so nguyen" << endl;
//		cout << "2. BCNN 2 so nguyen to" << endl;
//		cout << "3. nhap mang n so nguyen" << endl;
//		cin >> choice;
//		switch (choice) {
//		case 1: {
//			cout << "nhap a: ";
//			cin >> a;
//			cout << "nhap b: ";
//			cin >> b;
//			if (a < 0 || b < 0) {
//				cout << "vui long nhap lai" << endl;
//			}
//			else {
//				cout << "UCLN cua 2 so " << a << " va " << b << ": " << UCLN(a, b) << endl;
//			}
//			break;
//		}
//		case 2: {
//			cout << "nhap a: ";
//			cin >> a;
//			cout << "nhap b: ";
//			cin >> b;
//			if (a < 0 || b < 0) {
//				cout << "vui long nhap lai" << endl;
//			}
//			else {
//				cout << "BCNN cua 2 so " << a << " va " << b << ": " << BCNN(a, b) << endl;
//			}
//			break;
//		}
//		case 3: {
//			cout << "nhap n: ";
//			cin >> n;
//			int arr[n];
//			for (int i = 0; i < n; i++) {
//				cout << "nhap so thu " << i << ": ";
//				cin >> arr[i];
//			}
//		}
//		default: {
//			cout << " khong hop le!" << endl;
//		}
//		}
//	} while (choice != 0);
//
//	return 0;
//}
