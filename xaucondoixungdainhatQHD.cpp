//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string s;
//	cout << "nhap chuoi: ";
//	cin >> s;
//	int n;
//	cout << "nhap n: ";
//	cin >> n;
//	s = "x" + s;
//	//F[i][j] = (F[i+1][j-1] && (s[i] == s[j]))
//	bool F[10][10];
//	memset(F, false, sizeof(F));
//	for (int i = 1; i <= n; i++) {
//		F[i][i] = true; //xau con co do dai bang 1
//	}
//	int ans = 1;
//	for (int len = 2; len <= n; len++) {
//		//bo qua nhung truong hop khong du dieu kien
//		for (int i = 1; i <= n - len + 1; i++) {
//			int j = i + len - 1;
//			//F[i][j]: co do dai la len
//			if (len == 2 && s[i] == s[j]) F[i][j] = true;
//			else {
//				F[i][j] = F[i + 1][j - 1] && (s[i] == s[j]);
//			}
//			if (F[i][j]) ans = max(ans, len);
//		}
//	}
//	cout <<"ket qua: " << ans << endl;
//	return 0;
//}