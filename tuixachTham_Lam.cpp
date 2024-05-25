#include <iostream>
using namespace std;

struct bang {
    char name[10];
    int g;
    int v;
};

//sx theo gia tri
void sortA(bang A[100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[j].v > A[i].v) {
                bang t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}

// sx theo trong luong
void sortB(bang A[100], int n) {
    for (int i = 0; i < n -1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[j].g > A[j].g) {
                bang t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}

// sx theo ti le
void sortC(bang A[100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (float(A[j].v) / float(A[j].g) > float(A[i].v) / float(A[i].g)) {
                bang t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}

void show(bang A[], bang B[], int n, int W, int C[], int& c) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cout << A[i].name << ", ";
    }
    cout << endl;
    int u = 0, i = 0;
    do {
        if (W == 0 || i >= n) {
            break;
        }
        else if (i < n - 1 && A[i].g <= 2 * A[i + 1].g && A[i].v >= 2 * A[i].v) {
            i++;
        }
        else if (W >= A[i].g) {
            B[u] = A[i];
            u++;
            W -= A[i].g;
            sum += A[i].v;
        }
        else {
            i++;
        }
    } while (true);
    C[c++] = sum;

    for (int i = 0; i < u; i++) {
        cout << B[i].name << "|" << B[i].g << "|" << B[i].v << endl;
    }
    cout << endl;
}

void bestChoice(int C[]) {
    int max = 0;
    for (int i = 1; i < 3; i++) {
        if (C[max] < C[i]) {
            max = i;
        }
    }
    cout << "Gia tri tot nhat la " << C[max] << " o phuong an " << max + 1;
}
int main()
{
    bang A[100];
    int n;
    bang B[100] = { 0 };
    int C[3];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i].name;
        cin >> A[i].g;
        cin >> A[i].v;
    }
    int W;
    cout << "Nhap trong luong tui: ";
    cin >> W;
    int c = 0;
    sortA(A, n);
    show(A, B, n, W, C, c);

    sortB(A, n);
    show(A, B, n, W, C, c);

    sortC(A, n);
    show(A, B, n, W, C, c);

    bestChoice(C);

    return 0;
}