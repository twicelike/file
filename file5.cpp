#include <fstream>
#include <iostream>

using namespace std;
int main() {
  ifstream baitho;
  string s, temp;
  baitho.open("D:\\code\\C++\\laptrinhcoso\\file\\baitho..txt");
  while (getline(baitho, s)) {
    temp = "";
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != ' ')
        temp += s[i];
      else if (s[i + 1] != ' ')
        temp += s[i];
    }
    cout << temp << endl;
  }
}