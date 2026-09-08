#include <iostream>
using namespace std;

int main(){
    long long n;
    
    cout << "Nhap so n: ";
    cin >> n;

    if (n < 0 || n > 20){  
        cout << "So n khong hop le." << endl;
        return 1; 
    }

    long long factorial = 1;
    for (long long i = 1; i <= n; i++){
        factorial = factorial * i;
    }

    cout << "Giai thua " << n << " = " << factorial << endl;

    return 0;
}