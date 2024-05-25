//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//const int row = 3, col = 3;
//
//int min_travel(int arr[row][col], int x, int y) {
//    if (x < 0 || y < 0) {
//        return INT_MAX;
//    }
//    if (x == 1 && y == 1) { // Điều chỉnh điểm xuất phát ở đây
//        return arr[1][1];
//    }
//
//    int up = (x > 0) ? min_travel(arr, x - 1, y) : INT_MAX;
//    int left = (y > 0) ? min_travel(arr, x, y - 1) : INT_MAX;
//    int cross = (x > 0 && y > 0) ? min_travel(arr, x - 1, y - 1) : INT_MAX;
//    int min_road = min(up,min(left, cross));
//
//    return (min_road == INT_MAX) ? INT_MAX : arr[x][y] + min_road;
//}
//
//int main() {
//    int arr[row][col] = { {2, 3, 4},
//                          {5, 9, 3},
//                          {2, 6, 4} };
//
//    cout << "chi phi di chuyen toi thieu: " << min_travel(arr, 2, 2) << endl;
//    return 0;
//}
