#include <fstream>
#include <iostream>

using namespace std;
int main() {
  fstream danhsach;
  string s;
  int dem = 0;
  danhsach.open("D:\\code\\C++\\laptrinhcoso\\file\\danhsachten.txt", ios::in);
  while (getline(danhsach, s))
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'A' && s[i + 1] == 'n' && s[i + 2] == 'h' && s[i + 3] != ' ')
        dem++;
    }
  cout << "so nguoi ten Anh la: " << dem;
}
