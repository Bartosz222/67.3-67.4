#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
int fib(int n){
	if(n<3)return 1;
	return fib(n-2)+fib(n-1);
}
bool sprawdz(string liczba){
	int wynik =0;
	for(int i=0;i<=liczba.length();i++){
		if(liczba[i]=='1')wynik++;
		else continue;
	}
	if(wynik == 6) return true;
	else return false;
}
int main(int argc, char** argv) {
	char ciag[200];
	ofstream wynik;
	wynik.open("wynik.txt");
	for(int i=1;i<=40;i++){
		string x =itoa(fib(i),ciag,2);
		if(sprawdz(x)){
			cout<<x<<endl;
			wynik<<x<<endl;
		}
		else continue;
	}
	wynik.close();
	
	return 0;
}
