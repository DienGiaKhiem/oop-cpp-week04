#include <iostream>
using namespace std;

int main() {
    double x;
    int n;
    
    cout << "Nhap co so x: "; cin >> x;
    cout << "Nhap so mu n: "; cin >> n;

    double ket_qua = 1.0;

    // Sử dụng vòng lặp để nhân x n lần
    for (int i = 0; i < n; i++) {
        ket_qua = ket_qua * x;
    }

    cout << "Ket qua " << x << "^" << n << " la: " << ket_qua << endl;

    return 0;
}
