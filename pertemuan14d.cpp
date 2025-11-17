#include <iostream>
#include <string>
using namespace std;

int main(){
    int ARnilai[5];
    int nilaidicari;
    string status = "Belum Ketemu";

    cout<<"=========================================";
    cout<<"\n== Mencari nilai (N) pada Array ==\n";
    cout<<"=========================================";

    cout<<"\n== Isi Array ==\n";
    for(int i = 0; i<5; i++){
        cout<<"Isi index ke ["<<i<<"] = ";
        cin>>ARnilai[i];
    }

    cout<<"\nMasukkan nilai yang dicari = "; cin>>nilaidicari;

    for(int i = 0; i<5; i++){
        if(ARnilai[i]==nilaidicari){
            cout<<"\nNilai yang dicari ("<<nilaidicari<<") ditemukan di indek ke ["<<i<<"]\n";
            status = "ketemu";
            break; 
        }
    }
    if(status == "Belum Ketemu"){
        cout<<"\nNilai yang dicari ("<<nilaidicari<<") tidak ditemukan\n";
    }

    system("Pause");
    return 0;
}