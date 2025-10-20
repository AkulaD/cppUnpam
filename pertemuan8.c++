#include <iostream>

using namespace std;

int main(){
    int a;
    
    cout<<"Masukan nilai :"; cin >>a;

    if (a >= 60){
        cout<<"Anda Lulus"<<endl;
        if (a >= 80){
            cout<<"Selamat anda mendapatkan nilai A" <<endl;
        }
        else if (a >= 70){
            cout<<"Selamat anda mendapatkan nilai B" <<endl;
        }
        else if (a >= 60){
            cout<<"Selamat anda mendapatkan nilai C" <<endl;
        }
    }else{
        cout<<"Anda Tidak Lulus"<<endl;
        cout<<"Silahkan coba lagi tahun depan"<<endl;
    }

    return 0;
}