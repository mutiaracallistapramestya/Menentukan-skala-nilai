#include <iostream>
using namespace std;

int main(){
	
	//Mutiara Callista Pramestya
	//2117051013
	//Kelas C
	
	long double Nilai;
	
	//input//
	cout << "Masukkan Nilai Mata Kuliah DDP anda : ";
	cin  >> Nilai ;
	
	//output//
	if (Nilai < 50){
		cout << "F" << endl;
	}else if (Nilai <= 56) {
		cout << "E" << endl;
	}else if (Nilai <= 61) {
		cout << "D" << endl;
	}else if (Nilai <= 66) {
		cout << "C" << endl;
	}else if (Nilai <= 71) {
		cout << "B" << endl;
	}else if (Nilai <= 76) {
		cout << "B+" << endl;
	}else if (Nilai >= 76) {
		cout << "A" << endl;
	}
	
	
	return 0;
}
