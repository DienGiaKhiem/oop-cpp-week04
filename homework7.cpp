#include <iostream>
#include <cmath>

using namespace std;

long long timUCLN(long long a, long long b) {
    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0) return 0; 

    while (b != 0) {
        long long so_du = a % b;
        a = b;
        b = so_du;
    }
    return a;
}

int main() {
    long long a, b;
    cout << "Nhap a va b: ";
    cin >> a >> b;

    cout << "UCLN la: " << timUCLN(a, b) << endl;
    return 0;
}
