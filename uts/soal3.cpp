#include <iostream>
using namespace std;

int main(){
    int operasi;
    cout << "Silahkan memilih operasi" << endl;
    cout << "1. Kalkulator Sederhana" << endl;
    cout << "2. Konversi Suhu" << endl;
    cout << "Pilih operasi (1/2) : "; cin >> operasi;

    switch (operasi)
    {
    case 1:
        float a, b;
        cout << "Kalkulator Sederhana" <<endl;
        cout << "Angka Pertama : "; cin >> a;
        cout << "Angka Kedua : "; cin >> b;
        cout << "Hasil Penambahan " << a <<  " + " <<b << " = " << a + b <<endl;
        cout << "Hasil Pengurangan " << a << " - " << b << " = " << a - b <<endl;
        cout << "Hasil Perkalian " << a << " * " << b << " = "  << a * b <<endl;
        cout << "Hasil pembagian " << a << " / " << b << " = " << a / b <<endl;

        break;
    case 2:
        float cel;
        cout << "Masukan suhu dalam derajat Celcius : "; cin >> cel;
        cout << "Konversi suhu" <<endl;
        cout << "Nilai konversi " << cel << " C = " << cel * 9/5 + 32 << " F" <<endl;
        cout << "Nilai konversi " << cel << " c = " << cel + 273.15 << " K" <<endl;
        
        break;
    default:
        cout << "Operasi yang ada pilih tidak tersedia" <<endl;
        break;
    }
    system("pause");
    return 0;
}