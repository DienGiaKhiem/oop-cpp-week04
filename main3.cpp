#include <iostream>
#include <cmath>
using namespace std;

bool SoNguyenTo (int n){
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;

}

int main (){
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    if (SoNguyenTo (n)){
        cout << n << " la so nguyen to" << endl;
    }
    else cout << n << " khong phai la so nguyen to" << endl; 

    return 0;
}