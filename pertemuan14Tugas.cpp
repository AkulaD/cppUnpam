#include <iostream>
using namespace std;

int main(){
    int a[5];
    
    cout<<"====Input nilai====";
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<"Masukan nilai array = "; cin>>a[i];
    }

    int m = a[0];

    for(int i=0; i<5; i++){
        if(a[i] > m){
            m = a[i];
        }
    }

    cout<<"==== Menampilkan Nilai Terbesar ===="<<endl;
    cout<<"Nilai terbesar adalah "<<m<<endl;
    
    return 0;
}