#include <iostream>
using namespace std;

int main() {
	cout << "PROGRAM C++ KONVERSI SUHU" << endl;
	
	float c, k, f, r;
	
	cout << "Masukkan Suhu (Celcius)	:" << endl;
	cin >> c;
	
	k = c + 273.15;
	f = (c * 1.8) + 32;
	r = c * 0.8;
	
	cout << endl;
	cout << "Hasil Konversi Suhu dari Celcius ke	:" << endl;
	cout << "Kelvin	:" << k << endl;
	cout << "Fahreinheit	:" << f << endl;
	cout << "Reaumur	:" << r << endl;
	
	return 0;
}
