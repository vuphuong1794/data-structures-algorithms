//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int minCostToGetAllCoins(int coins[], int n, int k) {
//    // Sap xep danh sach cac dong xu theo thu tu tang dan
//    sort(coins, coins + n);
//
//    // Khoi tao bien dem so tien can thiet
//    int totalCost = 0;
//
//    int i = 0, j = n - 1;
//    // Lap lai qua trinh mua dong xu
//    while (i <= j) {
//        totalCost += coins[i];
//        i++;
//        j -= k;
//    }
//
//    return totalCost;
//}
//
//int main() {
//    // Vi du dau vao va kiem tra ket qua
//    int coins1[] = { 100, 20, 50, 10, 2, 5 };
//    int n1 = sizeof(coins1) / sizeof(coins1[0]);
//    cout << coins1[n1-1] << endl;
//    int k1 = 3;
//    cout << "Ket qua cho vi du 1: " << minCostToGetAllCoins(coins1, n1, k1) << endl;  // Output: 7
//
//    int coins2[] = { 1, 2, 5, 10, 20, 50 };
//    int n2 = sizeof(coins2) / sizeof(coins2[0]);
//    int k2 = 3;
//    cout << "Ket qua cho vi du 2: " << minCostToGetAllCoins(coins2, n2, k2) << endl;  // Output: 3
//
//    return 0;
//}
