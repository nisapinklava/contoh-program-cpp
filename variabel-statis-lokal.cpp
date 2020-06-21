#include <iostream>
using namespace std;

int contoh(){
	int A = 0;
	A = A + 10;
	return A;
}

//utama
int main(){
	int x, y, z;
	x = contoh();
	
	y = contoh();
	
	z = contoh();
	
	cout<<"Nilai pada pemanggilan pertama: "<<x<<endl;
	cout<<"Nilai pada pemanggilan kedua: "<<y<<endl;
	cout<<"Nilai pada pemanggilan ketiga: "<<z<<endl;
	
	return 0;
}
