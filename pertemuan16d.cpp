#include <iostream>
using namespace std;

int main(){
    string daftarBelanja[] = {"Telur", "Tepung", "Gula", "Minyak"};
    string *ptr = daftarBelanja;

    cout <<"Daftar belanja hari ini:"<<endl;

    for(int i = 0 ; i<4 ; i++){
        cout << i+1 << "." << *(ptr + i) <<endl;
    }

    *(ptr + 2) = "Garam";

    cout << "\nSetelah diubah:"<<endl;
    for(int i = 0; i < 4; i++){
        cout << i+1 << "." << *(ptr + i) <<endl;
    }
}