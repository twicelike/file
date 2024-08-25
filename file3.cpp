#include <fstream>
#include <iostream>

using namespace std;
int main() {
  ifstream baicode;
  string s;
  baicode.open("D:\\code\\C++\\laptrinhcoso\\file\\file2.cpp");
  while (getline(baicode, s))
    cout << s << endl;
  baicode.close();
}