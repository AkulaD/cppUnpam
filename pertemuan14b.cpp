#include <iostream>
using namespace std;

int main(){
    int ARnilai[5] = {5,2,10,2,8};

    for(int i=0; i<5; i++){
        cout<<"Menampilkan nilai ke "<< i<< " = "<< ARnilai[i]<<endl;
    }

    cout<<ARnilai[4];
    return 0;
}