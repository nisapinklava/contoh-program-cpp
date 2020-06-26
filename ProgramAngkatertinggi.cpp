#include <iostream>
#include <windows.h>
using namespace std;

int main(){
 system("COLOR 73");
 //programt menentukan angka tertinggi
 int tertinggi,a,b;
 cout<<"masukkan angka pertama: ";
 cin>>a;
 cout<<"masukkan angka kedua: ";
 cin>>b;
 cout<<"angka tertinggi adalah ";

  //code
 if(a>b){
  cout<<"angka pertama";
 }else{
  cout<<"angka kedua";
 }
 
 cin.get();
 return 0;
}
