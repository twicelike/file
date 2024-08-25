#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {
  string s, n;
  ifstream lmaobu;
  lmaobu.open("D:\\code\\C++\\laptrinhcoso\\file\\unlock.txt");
  //   while (getline(lmaobu, s)) {
  //     cout << s << endl;
  //   }
  getline(lmaobu, s);
  cout << s << endl;
}