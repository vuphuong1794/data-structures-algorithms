//
//#include <iostream>
//#include <climits>
//using namespace std;
//
//const int MAX = 1e3 + 5;
//int dp[MAX][MAX];
//
//int min_penalty(int A[], int n, int K) {
//    for (int i = 1; i <= n; i++) {
//        dp[i][1] = 0;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= K; j++) {
//            dp[i][j] = INT_MAX;
//            int penalty = 0;
//            for (int k = i - 1; k >= 0; k--) {
//                dp[i][j] = min(dp[i][j], dp[k][j - 1] + penalty);
//                if (k > 0 && A[k - 1] > A[i - 1]) {
//                    penalty++;
//                }
//            }
//        }
//    }
//
//    return dp[n][K];
//}
//int main() {
//
//    int a[100] = { 20, 50, 30, 60, 40, 100 };
//    int n = 0, K = 0;
//
//    cout << "Nhap n: ";
//    while (n < 1) {
//        cin >> n;
//        if (n < 1) {
//            cout << "Khong hop le, nhap lai: ";
//        }
//    }
//
//    bool same = 0;
//    for (int i = 0; i < n; i++) {
//        do {
//            cout << "Nhap chuoi A[" << i << "]: ";
//            cin >> a[i];
//            same = 0;
//            for (int u = 0; u < i; u++) {
//                if (a[u] == a[i]) {
//                    cout << "Trung lap!" << endl;
//                    same = 1;
//                    break;
//                }
//            }
//        } while (same == 1);
//    }
//
//    cout << "Nhap K: ";
//    while (K < 1) {
//        cin >> K;
//        if (K < 1) {
//            cout << "Khong hop le, nhap lai: ";
//        }
//    }
//
//    cout << "Diem phat nho nhat: " << min_penalty(a, n, K);
//    return 0;
//}