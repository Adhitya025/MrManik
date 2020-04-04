#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
//	system("figlet Mr.Manik");
//	system("date");
	cout << endl;
	cout << "=========================================";
	cout << endl;
	float a,b,ab;
	cout << "Masukan Alas : ";
	cin >> a;
	cout << "Masukan Tinggi : ";
	cin >> b;
	cout << endl;
	ab=a*b/2;
	cout << "=========================================" << endl;
	cout << "Luasnya : " << ab << endl;
	cout << "=========================================" << endl;
	char x;
	cout << "Apakah anda ingin mulai lagi [y/n] ? ";
	cin >> x;
	if (x == 'y' || x == 'Y'){
		system("clear")
		system("./grts.cpp")
	}else{
		system("exit")
	}
	
	
	
	
	
	
	
	cin.get();
	return 0;
}
