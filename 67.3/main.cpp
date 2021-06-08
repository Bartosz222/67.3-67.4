#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
int fib(int n){
	if(n<3)return 1;
	return fib(n-2)+fib(n-1);
}
int main(int argc, char** argv) {
	char ciag[200];
	ofstream wynik;
	wynik.open("wynik.txt");
	string max = itoa(fib(40),ciag,2);
	for(int j=1;j<40;j++){
		int x=fib(j);
		string liczba = itoa(x,ciag,2);
		int z = max.length()-liczba.length();
		for(int i=1;i<=z;i++){
			liczba = "0" + liczba; 
		}
		cout<<liczba<<endl;
		wynik<<liczba<<endl;
	}
	cout<<itoa(fib(40),ciag,2);
	wynik<<itoa(fib(40),ciag,2);
	wynik.close();
	return 0;
}
