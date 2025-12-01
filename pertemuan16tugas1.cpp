#include <iostream>
using namespace std;

int main(){
    string buahA = "Ceri", buahB = "Apel";
    cout <<"Sebelum ditukar: A = " <<buahA <<", B = " << buahB <<endl;

    string *ptrA = &buahA;
    string *ptrB = &buahB;
    string tempt = *ptrA;
    *ptrA = *ptrB;
    *ptrB = tempt;
    cout <<"Setelah ditukar: A = " << buahA <<", B = "<< buahB <<endl;
    return 0;


}