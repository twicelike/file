#include <fstream>
#include <iostream>

using namespace std;
int main() {
  fstream laydanhsach, luudanhsach;
  string s, v;
  int dem = 0;
  laydanhsach.open("D:\\code\\C++\\laptrinhcoso\\file\\danhsachten.txt",
                   ios::in);
  luudanhsach.open("D:\\code\\C++\\laptrinhcoso\\file\\honguyen.txt", ios::out);
  while (getline(laydanhsach, s)) {
    v = "";
    for (int i = 0; i < 6; i++)
      v += s[i];    //lay s ghep vao v tao chuoi so sanh
    if (v == "Nguyen")
      luudanhsach << s << "\n"; 
  }
}