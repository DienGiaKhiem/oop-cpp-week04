#include <iostream>
using namespace std;

int giaiphuongtrinh(int a, int b){
    if (a == 0 && b == 0){
        cout << "Phuong trinh vo so nghiem" << endl;
    }
    else if (a == 0 && b != 0){
        cout << "Phuong trinh vo nghiem" << endl;
    }
    else{
        cout << "Phuong trinh co nghiem duy nhat: x = " << -b/a << endl;
    }
}

int main(){
    int a;
    int b;
    cout << "a = " << a << ", b = " << b << endl;
    cin >> a;
    cin >> b;
    return 0;
}