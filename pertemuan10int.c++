#include <iostream>
using namespace std;

int main(){
    int nomer;
    
    cout  << "Masukan [1/2/3] :"; cin>>nomer;

    switch (nomer){
        case 1:
            cout << "Anda memilih angka 1"<<endl;
            break;
        case 2:
            cout << "Anda memilih angka 2"<<endl;
            break;
        case 3:
            cout << "Anda memilih angka 3"<<endl;
            break;
        default:
            cout << "Pilihan default terpilih" <<endl;
            break;
    }
    return 0;
}