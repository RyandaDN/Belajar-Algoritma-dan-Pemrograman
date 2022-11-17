#include<iostream>

using namespace std;

int main(){
	int nilai1, nilai2, nilai3, nilai4;
	
	nilai1 = 11 > 10;
	cout << "Nilai 1 = "<< nilai1<<endl; 
	nilai2 = 35 == 36;
	cout << "Nilai 2 = "<< nilai2<<endl;
			
	nilai3 = (40 > 36) && (35 < 36);
	cout << "Nilai 3 = "<< nilai1<<endl;
	nilai4 = !(88 == 88);
	cout << "Nilai 4 = "<< nilai2;
	
	//Jika hasilnya 1 maka benar
	//Jika hasilnya 0 maka salah
}
