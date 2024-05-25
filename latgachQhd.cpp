//#include <iostream>
//using namespace std;
//
//const int MAX = 1000;
//long long dp[MAX];
//
//void cachXep() {
//    dp[1] = 1;
//    dp[2] = 2;
//    for (int i = 3; i < MAX; i++) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//}
//
//int main() {
//    cachXep();
//    int T;
//    cin >> T;
//    while (T--) {
//        int N;
//        cin >> N;
//        cout << dp[N] << endl;
//    }
//    return 0;
//}
