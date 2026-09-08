#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;

    // Giữ lại giá trị gốc để tính toán
    int so_goc_a = a;
    int so_goc_b = b;

    while (b != 0) {
        int so_du = a % b;
        a = b;
        b = so_du;
    }
    int ucln = a; // Sau vòng lặp, 'a' chính là UCLN

    int bcnn = (so_goc_a / ucln) * so_goc_b;

    cout << "Boi chung nho nhat la: " << bcnn << endl;

    return 0;
}
