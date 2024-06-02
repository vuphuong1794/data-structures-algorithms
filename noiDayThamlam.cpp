/*#include <iostream>
using namespace std;

int mang[10] = { 4,3,2,6 };
int n = 4, tong=0;

void sort(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mang[i] > mang[j]) {
                int T = mang[i];
                mang[i] = mang[j];
                mang[j] = T;
            }
        }
    }
}

void tinhtoan(int n) {
    mang[0] = mang[0] + mang[1];
    mang[1] = INT_MAX;
    tong += mang[0];
}

void printDanhSach(int n) {
    for (int i = 0; i < n; i++) {
        cout << mang[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout<<"danh sach ban dau: ";
    printDanhSach(n);
    sort(n);
    while (n > 1) {
        cout << "danh sach sau sort: ";
        printDanhSach(n);
        tinhtoan(n);
        sort(n);
        n--;
    }
    printDanhSach(n);
    cout << "tong: " << tong << endl;
    return 0;
}
*/
