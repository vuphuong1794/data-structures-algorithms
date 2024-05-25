//#include <iostream>
//using namespace std;
//int main() {
//	int n, S; cin >> n>>S;
//	int w[100], v[100];
//	for (int i = 1; i <= n; i++) cin >> w[i];
//	for (int i = 1; i <= n; i++) cin >> v[i];
//	int dp[100][100];
//	memset(dp, 0, sizeof(dp));
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= S; j++) {
//			//ko lua chon vat thu i vao tui
//			dp[i][j] = dp[i - 1][j];
//			//co the dua vat thu i vao tui
//			if (j >= w[i]) {
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= S; j++) {
//			cout << dp[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << dp[n][S] << endl;
//	return 0;
//}