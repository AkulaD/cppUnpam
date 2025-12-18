#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

double tambah(double a, double b) {
    return a + b;
}

int tambah(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << tambah(3, 4) << endl;
    cout << tambah(2.5, 4.5) << endl;
    cout << tambah(1, 2, 3) << endl;
    
    system("pause");
    return 0;
}
