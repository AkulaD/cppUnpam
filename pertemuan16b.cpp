#include <iostream>
using namespace std;
// Pointer C++
int main(){
    int nilai;
    int *x;
    x = &nilai;

    cout <<"Masukkan nilai:";
    cin >> nilai;
    cout <<"Mem Addrees nilai adalah:"<< x <<endl;
    cout <<endl;

    cout<<"Masukan nilai baru:";
    cin >> *x;
    cout <<"Nilai X adalah : "<< *x <<endl;
    cout <<"Mem Addres X : "<< x <<endl;
 
    return 0;
}