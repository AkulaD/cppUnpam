#include <iostream>
#include <string>
using namespace std;

struct paket_internet{
    string nama_paket;
    int kouta_telepon;
    int kouta_internet;
};

int main(){
    paket_internet begadang;
    paket_internet belajar;

    begadang.nama_paket = "Begadang";
    begadang.kouta_telepon = 50;
    begadang.kouta_internet = 150;

    belajar.nama_paket = "Belajar";
    belajar.kouta_telepon = 0;
    belajar.kouta_internet = 50;

    cout<<"Nama paket : " << begadang.nama_paket << endl;
    cout<<"Kouta telepon : " << begadang.kouta_telepon << " Menit" <<endl;
    cout<<"Kouta internet : " << begadang.kouta_internet << " GB" <<endl;
    cout<<".................................."<<endl;
    cout<<"Nama paket : " <<belajar.nama_paket << endl;
    cout<<"Kouta telepon : " << belajar.kouta_telepon << " Menit" <<endl;
    cout<<"Kouta internet : " << belajar.kouta_internet << " GB" <<endl;

    cout<<".................................." <<endl;

    return 0;
}