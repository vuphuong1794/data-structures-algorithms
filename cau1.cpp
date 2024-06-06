#include <iostream>
#include <math.h>
using namespace std;

int sumNum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}


int main()
{
    int s, d, sum, count;
    cout << "Nhap s,d: ";
    cin >> s >> d;
    if (s > 9 * d) {
        cout << "Không co so nao thoa man";
        return 0;
    }
    int current_Num = pow(10, d - 1);
    int mu = d - 1;
    while (true) {
        sum = sumNum(current_Num);
        count = countDigits(current_Num);
        if (sum == s && count == d) {
            cout << "So nho nhat co tong chu so la " << s << " va so chu so la " << d << " la: " << current_Num << endl;
            break;
        }
        int a = (int)pow(10, mu);
        int b = pow(10, d - mu - 1);
        if ((current_Num % a) / b != 9) {
            current_Num += b;
        }
        else {
            mu -= 1;
        }
    }
    return 0;
}