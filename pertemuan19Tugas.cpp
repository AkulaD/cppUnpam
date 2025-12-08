#include <iostream>
#include <string>
using namespace std;

struct buku{
    string judul;
    string penulis;
    int tahun_terbit;
    int harga;
};

string currency(int a){
    string s = to_string(a);
    int c = (int)s.length() - 3;
    while(c > 0){
        s.insert(c, ".");
        c -=3;
    }
    return s;
}

int main(){
    buku buku1;
    buku buku2;
    buku buku3;

    buku1.judul = "Algoritma dan Pemogramman 1";
    buku1.penulis = "Tini";
    buku1.tahun_terbit = 2021;
    buku1.harga = 150000;

    buku2.judul = "Pemogramman Web 1";
    buku2.penulis = "Tono";
    buku2.tahun_terbit = 2020;
    buku2.harga = 160000;

    buku3.judul = "Basis Data 1";
    buku3.penulis = "Toni";
    buku3.tahun_terbit = 2023;
    buku3.harga = 170000;

    cout<<"................List Buku ................"<<endl;
    cout<<"Judul Buku : " << buku1.judul << endl;
    cout<<"Penulis : " << buku1.penulis << endl;
    cout<<"Tahun terbit : " << buku1.tahun_terbit << endl;
    cout<<"Harga : Rp" << currency(buku1.harga) <<endl;
    cout<<".................................." << endl;

    cout<<"Judul Buku : " << buku2.judul << endl;
    cout<<"Penulis : " << buku2.penulis << endl;
    cout<<"Tahun terbit : " << buku2.tahun_terbit << endl;
    cout<<"Harga : Rp" << currency(buku2.harga) <<endl;
    cout<<".................................." << endl;
    
    cout<<"Judul Buku : " << buku3.judul << endl;
    cout<<"Penulis : " << buku3.penulis << endl;
    cout<<"Tahun terbit : " << buku3.tahun_terbit << endl;
    cout<<"Harga : Rp" << currency(buku3.harga) <<endl;
    cout<<".................................." << endl;

    return 0;
}