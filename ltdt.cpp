/*#include <iostream>
#include <vector>
#include <fstream>
#include <limits>
#include <string>

using namespace std;
int vertex[100];

class DoThi {
private:
	int dinh;
	vector<vector<int>> MTK;

public:
	DoThi(int dinh) {
		this->dinh = dinh;
		MTK.resize(dinh, vector<int>(dinh, 0));
	}

	bool voHuong(int u, int v) {
		for (int i = 0; i < dinh; i++) {
			for (int j = 0; j < dinh; j++) {
				if (MTK[i][j] != MTK[j][i]) {
					return false;
				}
			}
		}
		return true;
	}

	int TongBac() {
		// Tính tổng bậc của tất cả các đỉnh trong đồ thị vô hướng
		int tong = 0;
		for (int i = 0; i < dinh; ++i) {
			for (int j = 0; j < dinh; ++j) {
				tong += MTK[i][j];
			}
		}
		return tong / 2; // Mỗi cạnh được đếm hai lần
	}

	int Bac(int u) {
		// Tính bậc của đỉnh u trong đồ thị vô hướng
		int bac = 0;
		for (int j = 0; j < dinh; ++j) {
			bac += MTK[u][j];
		}
		return bac;
	}

	void themCanhVH(int u, int v) {
		if (u >= 0 && u < dinh && v >= 0 && v < dinh) {
			MTK[u][v] = 1;
			MTK[v][u] = 1;
		}
		else {
			cerr << "Canh (" << u << ", " << v << ") vuot qua gioi han cua do thi." << endl;
		}
	}

	void InMTK() {
		cout << "Ma tran ke: " << endl;
		cout << "\t";
		for (int i = 0; i < dinh; i++) {
			cout << vertex[i] << "\t";
		}
		cout << endl;
		for (int i = 0; i < dinh; i++) {
			cout << vertex[i] << "\t";
			for (int j = 0; j < dinh; j++) {
				cout << MTK[i][j] << "\t";
			}
			cout << endl;
		}
	}

	void InDanhSachCanh() {
		cout << "Danh sach canh: " << endl;
		for (int i = 0; i < dinh; ++i) {
			for (int j = i + 1; j < dinh; ++j) {
				if (MTK[i][j] == 1) {
					cout << "(" << i << ", " << j << ")" << endl;
				}
			}
		}
	}

	void InDSK() {
		cout << "Danh sach ke: " << endl;
		for (int i = 0; i < dinh; ++i) {
			cout << "Dinh " << i << ": ";
			for (int j = 0; j < dinh; ++j) {
				if (MTK[i][j] == 1) {
					cout << j << " ";
				}
			}
			cout << endl;
		}
	}

	void tinhtoan() {
		for (int i = 0; i < dinh; i++) {
			for (int j = 0; j < dinh; j++) {
				if (voHuong(i, j)) {
					int tongBac = TongBac();
					int bacDinh1 = Bac(1);
					// In ra tổng bậc và bậc của đỉnh 1
					cout << "Tong bac cua do thi vo huong: " << tongBac << endl;
					cout << "Bac cua dinh 1: " << bacDinh1 << endl;
				}
				else {

				}
			}
		}
	}
};

int main() {
	int sodinh, dinh1, dinh2;

	ifstream fileInput;
	fileInput.open("testinput.txt");

	if (!fileInput.is_open()) {
		cerr << "Khong tim thay file input" << endl;
		return 1;
	}

	fileInput >> sodinh;

	DoThi g(sodinh);
	while (fileInput >> dinh1 >> dinh2) {
		if (dinh1 == -1 || dinh2 == -1) {
			break;
		}
		g.themCanhVH(dinh1, dinh2);
	}
	for (int i = 0; i < sodinh; i++)
	{
		cout << "nhap " << sodinh << " ten cac dinh cua do thi theo thu tu: ";
		cin >> vertex[i];
	}

	fileInput.close();
	g.InMTK();
	g.InDanhSachCanh();
	g.InDSK();
	g.tinhtoan();
	return 0;
}*/