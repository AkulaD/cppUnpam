#include <iostream>
using namespace std;

int main(){
    int a;
    for(a=1; a<=20; a++){
        if(a%2 == 0){
            if(a==8){
                continue;
            }
            cout <<a<<endl;
        }
    }
    return 0;
}