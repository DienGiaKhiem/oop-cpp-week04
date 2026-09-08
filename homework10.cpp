#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: "; cin >> n;

    int dem = 0; // Biến dùng để đếm số lượng ước

    cout << "Divisors: ";
    // kiểm tra tất cả các số từ 1 đến n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " "; 
            dem++;            
        }
    }
    
    cout << endl;
    cout << "Number of divisors: " << dem << endl;

    return 0;
}
