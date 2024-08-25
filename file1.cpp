#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {
  int n;
  string s;
  ofstream baitho;
  baitho.open("D:\\code\\C++\\laptrinhcoso\\file\\unlock.txt");
  cout << "nhap vao so luong dong tho: ";
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    baitho << s << endl;
  }
}