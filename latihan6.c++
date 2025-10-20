#include <iostream>
using namespace std;

int main(){
    string nama, kelas;
    char kelamin;
    int umur;
    float ipk;

    cout << "Nama: ";
    getline(cin, nama);
    cout << "IPK yang diinginkan: ";
    cin >> ipk;
    cin.ignore();
    cout << "Kelas: ";
    getline(cin,kelas);
    cout << "Kelamin (L/P): ";
    cin >> kelamin;
    cout << "Umur: ";
    cin >> umur;

    cout << "\n\n=============INFO MAHASISWA=============\n";
    cout << "Nama: " << nama << endl;
    cout << "IPK yang diinginkan: " << ipk << endl;
    cout << "Kelas: " << kelas << endl;
    cout << "Kelamin: " << kelamin << endl;
    cout << "Umur: " << umur << endl;


}