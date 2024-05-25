//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n, S, m;
//    cout << "Nhap so luong vat: ";
//    cin >> n;
//    cout << "Nhap trong luong max: ";
//    cin >> S;
//    cout << "Nhap so luong max ten trom co the cuop: ";
//    cin >> m;
//
//    int w[100], v[100];
//    for (int i = 1; i <= n; i++) cin >> w[i];
//    for (int i = 1; i <= n; i++) cin >> v[i];
//
//    int dp[100][100]; // Thêm chiều thứ ba cho số lượng vật
//
//    // Khởi tạo giá trị ban đầu cho dp
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= S; j++) {
//                dp[i][j] = 0;
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= S; j++) {
//            for (int k = 0; k <= m; k++) {
//                // Không chọn vật thứ i
//                dp[i][j] = dp[i - 1][j];
//
//                // Có thể chọn vật thứ i
//                if (j >= w[i]) {
//                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
//                }
//            }
//        }
//    }
//
//    // In ra giá trị lớn nhất có thể đạt được
//    int max_value = 0;
//    for (int k = 0; k <= m; k++) {
//        max_value = max(max_value, dp[n][S]);
//    }
//    cout << "Gia tri lon nhat: " << max_value << endl;
//
//    return 0;
//}