#include <fstream>
#include <iostream>

using namespace std;
int main() {
  ifstream baitho;
  string s;
  int n = 0;
  baitho.open("D:\\code\\C++\\laptrinhcoso\\file\\baitho..txt");
  while (getline(baitho, s))
    for (int i = 0; i < s.size(); i++)
      if (s[i] >= 'A' && s[i] <= 'Z')
        n++;

  cout << "so ki tu hoa la : " << n;
}