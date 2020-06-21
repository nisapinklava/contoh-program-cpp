#include <iostream>
using namespace std;

int main(){
	static string a;
	static int b;;
	
	cout<<"nama anda: ";
	cin>>a;
	cout<<"umur anda: ";
	cin>>b;
	cout<<"kamu "<<a<<" umurnya "<<b<<endl;
}
