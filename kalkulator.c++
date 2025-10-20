#include <iostream>
#include <string>

using namespace std;

int main() {
	string operasi;
	float a, b, hasil;

	cout << "Masukan angka pertama:"; cin>>a;
	cout << "Masukan angka kedua:"; cin>>b;

	cout << "Pilih operasi (+, -, *, /):"; cin>>operasi;

	if(operasi == "+"){
		hasil = a + b;
		cout<<"Hasil dari "<<a<<" + "<<b<<" = "<<hasil<<endl;
	}
	else if(operasi == "-"){
		hasil = a - b;
		cout<<"Hasil dari "<<a<<" - "<<b<<" = "<<hasil<<endl;
	}
	else if(operasi == "*"){
		hasil = a * b;
		cout<<"Hasil dari "<<a<<" * "<<b<<" = "<<hasil<<endl;
	}
	else if(operasi == "/"){
		hasil = a / b;
		cout<<"Hasil dari "<<a<<" / "<<b<<" = "<<hasil<<endl;
	}
	else{
		cout<<"Operasi yang anda input salah"<<endl;
	}

	system("pause");
	return 0;
}