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

	return 0;
}*/