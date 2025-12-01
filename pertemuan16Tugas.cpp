#include <iostream>
using namespace std;

int main(){
    string daftarBuah[] = {"Ani", "Beni", "Cita"};
    string *ptr = daftarBuah;

    cout <<"Daftar anggota sebelum diubah:"<<endl;

    for(int i = 0; i<3; i++){
        cout << i+1 << "." << *(ptr + i)<<endl;
    }

    *(ptr + 1) = "Bowo";

    cout <<"Daftar anggota setelah diubah: "<<endl;
    for(int i = 0; i < 3; i++){
        cout << i+1 << "." << * (ptr + i) <<endl;
    }

    return 0;
}