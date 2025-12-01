#include <iostream>
using namespace std;

int main(){
    int uangA = 50000, uangB = 100000;
    cout <<"Sebelum ditukar: A = "<< uangA <<", B = "<< uangB <<endl;

    // Saat menukar
    int *ptrA = &uangA;
    int *ptrB = &uangB;
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    cout <<"Setelah Ditukar: A = "<< uangA <<", B = "<< uangB <<endl;


    return 0;
}