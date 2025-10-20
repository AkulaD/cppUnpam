#include <iostream>

using namespace std;

int main(){
    int a;

    cout<<"Masukan nilai :"; cin>>a;

    if(a >=0 && a <=100){
        cout<<"Nilai Yang Anda Input Valid"<<endl;
    } 
    else{
        cout<<"Nilai Yang Anda Input Tidak Valid"<<endl;
    }

    return 0;
}