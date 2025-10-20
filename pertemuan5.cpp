#include <iostream>
#include <cmath>

using namespace std;

int main(){
	const double PI = 3.14159;
	
	double jariJari,luas;
	
	cout << "Masukan jari-jari lingkaran:";
	cin >> jariJari;
	
	
	luas = PI * pow(jariJari, 2);
	
	cout <<"Luas lingkaran:" << luas <<endl;
	
	return 0; 
}
