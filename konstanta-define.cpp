#include <iostream>
using namespace std;

#define MAX 5

int main() {
	int A[MAX];
	
	for (int c = 0; c < MAX; c++){
		
		A[c] = c * 10;
		cout<<A[c]<<endl;

	}
	
	return 0;
}
