#include<iostream>
#include<conio.h>

using namespace std;
main(){
    int a, b, c, d;

    cout<<"Masukan nilai a = ";
    cin>>a;
    cout<<"Masukan nilai b = ";
    cin>>b;
    cout<<"Masukan nilai c = ";
    cin>>c;

    d = (a*b)-c/(b+a);

    cout<<"Nilai dari d = ("<<a<<"*"<<b<<")-"<<c<<"/("<<b<<"+"<<a<<") ="<<d<<endl;
    
    getch();
}