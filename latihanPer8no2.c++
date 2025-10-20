#include <iostream>

using namespace std;

int main(){
    int sayur;
    
    cout<<"Sayur apakah yang anda suka ? "<<endl;
    cout<<"1. Kangkung"<<endl;
    cout<<"2. Bayam"<<endl;
    cout<<"angka pilihan anda : "; cin>>sayur;

    if (sayur == 1 || sayur == 2){
        cout <<"Sayur yang anda input benar"<<endl;
    }else{
        cout <<"Sayur yang anda input salah"<<endl;
    }

    return 0;
}