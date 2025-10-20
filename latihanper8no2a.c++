#include <iostream>
#include <string>

using namespace std;

int main(){
    string sayur;

    cout<<"Sayur apakah yang anda suka: "; cin>>sayur;

    if(sayur == "Kangkung" || sayur == "Bayam"){
        cout<<"Sayur yang anda input benar"<<endl;
    }else{
        cout<<"Sayur yang anda input salah"<<endl;
    }

    return 0;

}