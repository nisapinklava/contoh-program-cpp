#include <iostream>
using namespace std;

//static menyimpan data ke memori

string contoh(){
	static string A = "nisa";
	A = A + "pink";
	return A;
}

//utama
int main(){
	string x, y, z;
	x = contoh();
	
	y = contoh();
	
	z = contoh();
	
	cout<<"Nilai pada pemanggilan pertama: "<<x<<endl;
	cout<<"Nilai pada pemanggilan kedua: "<<y<<endl;
	cout<<"Nilai pada pemanggilan ketiga: "<<z<<endl;
	
	return 0;
}
