#include <iostream>
using namespace std;
int main(){
    int operasi;
    cout <<"pilih operasi kalkulator: 1. tambah 2. kurang 3. kali 4. bagi :"; cin>>operasi;
    switch (operasi)
    {
    case 1:
        cout<<"anda memilih operasi tambah"<<endl;
        cout<<"masukkan angka pertama:"; float a; cin>>a;
        cout<<"masukkan angka kedua:"; float b; cin>>b;
        cout<<"hasil dari "<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;
    case 2:
        cout<<"anda memilih operasi kurang"<<endl;
        cout<<"masukkan angka pertama:"; float c; cin>>c;
        cout<<"masukkan angka kedua:"; float d; cin>>d;
        cout<<"hasil dari "<<c<<" - "<<d<<" = "<<c-d<<endl;
        break;
    case 3:
        cout<<"anda memilih operasi kali"<<endl;
        cout<<"masukkan angka pertama:"; float e; cin>>e;
        cout<<"masukkan angka kedua:"; float f; cin>>f;
        cout<<"hasil dari "<<e<<" * "<<f<<" = "<<e*f<<endl;
        break;
    case 4:
        cout<<"anda memilih operasi bagi"<<endl;
        cout<<"masukkan angka pertama:"; float g; cin>>g;
        cout<<"masukkan angka kedua:"; float h; cin>>h;
        if (h != 0) {
            cout<<"hasil dari "<<g<<" / "<<h<<" = "<<g/h<<endl;
        } else {
            cout<<"Error: Pembagian dengan nol tidak diperbolehkan."<<endl;
        }
        break;
    default:
        cout<<"Operasi yang anda pilih tidak tersedia"<<endl;
        break;
    }
}