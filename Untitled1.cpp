#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream f;
	string s;
	f.open("test.txt", ios::out);
	getline(cin,s);
	f <<s;
	f.close();
}