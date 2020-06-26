#include <iostream>
using namespace std;

//program pangkat
int pangkat(int a,int b){
 int hasil = a;
 for(int i=1; i<b;i++){
  hasil=hasil*a;
 }
 return hasil; 
}

int main(){
 int a;
 int b;
 cout<<"MENGHITUNG PANGKAT DARI SUATU BILANGAN"<<endl<<endl;
 cout<<"masukkan angka: ";
 cin>>a;
 cout<<"masukkan pangkat: ";
 cin>>b;
 cout<<"hasil pangkat dari "<<a <<" pangkat "<<b<<" adalah.. "<< pangkat(a,b);
}
