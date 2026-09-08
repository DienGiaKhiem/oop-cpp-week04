#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int soDao = 0;
    while (n > 0) {
        int chuSo = n % 10;
        soDao = soDao * 10 + chuSo;
        n = n / 10;
    }

    cout << "So dao nguoc la: " << soDao << endl;

    return 0;
}
