#include <iostream>
using namespace std;

int A;
void test(){
	A = 20;
	cout<<"Nilai A di dalam fungsi test(): "<<A<<endl;
}

//utama
int main(){
	A= 10;
	cout<<"Nilai A di dalam fungsi main(): "<<A<<endl;
	
	test();
	
	return 0;
}
