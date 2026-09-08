#include <iostream>
using namespace std;

bool laSoDoiXung(int n) {
    if (n < 0) return false; // Số âm không phải số đối xứng
    
    int goc = n;
    int soDao = 0;
    
    while (n > 0) {
        int chữ_số = n % 10;
        soDao = soDao * 10 + chữ_số;
        n /= 10;
    }
    
    return goc == soDao;
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    
    if (laSoDoiXung(n)) {
        cout << n << " la so doi xung.";
    } else {
        cout << n << " khong la so doi xung";
    }
    
    return 0;
}
