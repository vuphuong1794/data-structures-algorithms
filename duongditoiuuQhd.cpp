//#include <iostream>
//#include <climits>
//#include <vector>
//
//using namespace std;
//
//const int row = 3, col = 3;
//
//int min_travel(int arr[row][col], int x, int y) {
//    vector<vector<int>> dp(row, vector<int>(col, INT_MAX));
//    dp[0][0] = arr[0][0];
//
//    for (int i = 1; i < row; ++i)
//        dp[i][0] = arr[i][0] + dp[i - 1][0];
//
//    for (int j = 1; j < col; ++j)
//        dp[0][j] = arr[0][j] + dp[0][j - 1];
//
//    for (int i = 1; i < row; ++i) {
//        for (int j = 1; j < col; ++j) {
//            dp[i][j] = arr[i][j] + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
//        }
//    }
//
//    int min_road = dp[x][y];
//    return (min_road == INT_MAX) ? INT_MAX : min_road;
//}
//
//int main() {
//    int arr[row][col] = { {2, 3, 4},
//                         {5, 9, 3},
//                         {2, 6, 4} };
//
//    cout << "Chi phi di chuyen toi thieu: " << min_travel(arr, 1, 1) << endl;
//    return 0;
//}