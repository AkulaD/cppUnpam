#include <iostream>
using namespace std;

int main(){
    float cel;
    cout << "Masukan suhu dalam derajat Celcius : "; cin >> cel;
    cout << "Konversi suhu" <<endl;
    cout << "Nilai konversi " << cel << " = " << cel * 9/5 + 32 << " F" <<endl;
    cout << "Nilai konversi " << cel << " = " << cel + 273.15 << " K" <<endl; 

    system("pause");
    return 0;
}