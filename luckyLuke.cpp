//#include <iostream>
//
//using namespace std;
//
//const int MOD = 1e9 + 7; // Định nghĩa hằng số cho phép lấy phần dư
//const int MAX = 1e5;
//
//int main() {
//    int N, K;
//    cout << "nhap tong so bac va so bac bi thung: ";
//    cin >> N >> K;
//    // Mảng đánh dấu bậc thang bị hỏng
//    // Mảng lưu trữ số cách để đến mỗi bậc thang
//    int broken[MAX] = { 0 };
//    int ways[MAX] = { 0 };
//    
//
//    // Nhập tên bậc thang bị hỏng
//    for (int i = 0; i < K; ++i) {
//        int step;
//        cout << "ten bac thung: ";
//        cin >> step;
//        broken[step] = 1;
//    }
//
//    // Khởi tạo giá trị ban đầu
//    ways[1] = 1; // Bậc thang đầu tiên không bao giờ bị thủng
//
//    // Tính toán số cách để đến mỗi bậc thang
//    for (int i = 2; i <= N; ++i) {
//        if (broken[i]) continue; // Bỏ qua nếu bậc thang bị hỏng
//        if (!broken[i - 1] || !broken[i-2]) ways[i] = (ways[i - 1]+ways[i-2]);
//    }
//
//    // In ra kết quả
//    cout << "So cach: " << ways[N] << endl;
//
//    return 0;
//}
