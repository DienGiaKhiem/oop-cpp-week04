#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so n: ";
    cin >> n;

    long long so_goc = n; 

    if (n == 0){
        cout << "Tong cac chu so cua 0 la 0" << endl;
        return 0;
    }

    if (n < 0){
        n = -n;
    }


    long long tong = 0; 

    while (n > 0){
        int chu_so = n % 10;  
        tong = tong + chu_so;
        n = n / 10;           
    }

    cout << "Tong cac chu so cua " << so_goc << " la " << tong << endl;

    return 0;
}
