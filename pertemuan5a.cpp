#include <iostream>
#include <string>
using namespace std;

int main(){
	int umur = 17;
	int nis = 2023001;
	
	float tinggi = 165.5;
	double berat = 58.75;
	
	char kelas = 'A';
	
	bool statusLulus = true;
	
	string nama = "Fitri Ramadan";
	string alamat = "JL. Merdeka No.10";
	
	unsigned int tahunLulus = 2024;
	
	cout << "====Data Siswa =====" <<endl;
	cout << "Nama				:" <<nama <<endl;
	cout << "NIS				:" <<nis <<endl;
	cout << "Umur				:" <<umur <<endl;
	cout << "Tinggi				:" <<tinggi <<endl;
	cout << "Berat				:" <<berat <<endl;
	cout << "Kelas				:" <<kelas <<endl;
	cout << "Alamat				:" <<alamat <<endl;
	cout << "Status Lulus			:" <<statusLulus <<endl;
	cout << "Tahun Lulus			:" <<tahunLulus <<endl;

	return 0;
}
