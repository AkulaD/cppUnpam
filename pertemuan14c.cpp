#include <iostream>
using namespace std;

int main(){
    int ARnilai[5];

    cout<<"== Mengisi Array ARnilai ==\n";
    for(int i=0; i<5; i++){
        cout<<"Isi index ke ["<<i<<"] = ";
        cin>>ARnilai[i];
    }

    for(int i = 0; i<5; i++){
        cout<<"\nTampilan nilai index ke ["<<i<<"] = "<<ARnilai[i]<<endl;
    }
    return 0;
}