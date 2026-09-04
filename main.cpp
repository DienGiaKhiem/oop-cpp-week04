#include <iostream>
#include <string>
using namespace std;
void printname(int n, string name){
    getline (cin, name);
cout << "Name: " << name << endl;
}

int main()
{
    string name;
    printname(1, name);
    return 0;
}
//kiểm tra gits
