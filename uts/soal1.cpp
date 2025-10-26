#include <iostream>
using namespace std;

int main(){
    float a, b;

    cout << "Kalkulator Sederhana" <<endl;
    cout << "Angka Pertama : "; cin >> a;
    cout << "Angka Kedua : "; cin >> b;
    cout << "Hasil Penambahan " << a << " + " <<b << " = " << a + b <<endl;
    cout << "Hasil Pengurangan " << a << " - " << b << " = " << a - b <<endl;
    cout << "Hasil Perkalian "  << a << " * " << b << " = " << a * b <<endl;
    cout << "Hasil Pembagian " << a << " / " << b << " = " <<  a / b <<endl;
    
    system("pause");
    return 0;
}