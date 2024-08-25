#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {
  int n = 0, m = 0, l = 0;
  string s;
  ifstream baitho;
  baitho.open("D:\\code\\C++\\laptrinhcoso\\file\\unlock.txt");
  while (getline(baitho, s)) {
    m += s.size();
    n++;
    for (int i = 0; i < s.size(); i++)
      if (s[i] == ' ')
        n++;
    l++;
  }
  baitho.close();

  cout << n << " tu" << endl;
  cout << m << " ki tu" << endl;
  cout << l << " dong";
}