//#include <iostream>
//#include <vector>
//using namespace std;
//
//double calculateSeaLevel(int N, double firstDayLevel, double secondDayLevel) {
//    vector<double> seaLevel(N + 1);
//    seaLevel[1] = firstDayLevel;
//    seaLevel[2] = secondDayLevel;
//
//    for (int i = 3; i <= N; ++i) {
//        seaLevel[i] = 2 * seaLevel[i - 1] - seaLevel[i - 2];
//    }
//
//    return seaLevel[N];
//}
//
//int main() {
//    int N;
//    double firstDayLevel, secondDayLevel;
//
//    // Giả sử mực nước biển hai ngày đầu là 10 và 12
//    firstDayLevel = 5;
//    secondDayLevel = 6;
//
//    cout << "Nhap N: ";
//    cin >> N;
//
//    cout << "Muc nuoc bien ngay thu " << N << " la: " << calculateSeaLevel(N, firstDayLevel, secondDayLevel) << endl;
//
//    return 0;
//}
