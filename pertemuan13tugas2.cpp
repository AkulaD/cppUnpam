#include <iostream>
using namespace std;

int main(){
    int a;
    for(a=1; a<=15; a++){
        if(a==13){
            break;
        }
        cout<<a<<endl;
    }
    return 0;
}