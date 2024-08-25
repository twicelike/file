#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  fstream danhsach, luusx;
  string s;
  vector<string> v;

  danhsach.open("D:\\code\\C++\\laptrinhcoso\\file\\DSten.txt", ios::in);
  luusx.open("D:\\code\\C++\\laptrinhcoso\\file\\SX.txt", ios::out);

  while (getline(danhsach, s)) {
    v.push_back(s);
  }

  // Bubble sort implementation
  for (int i = 0; i < v.size() - 1; i++) {
    for (int j = 0; j < v.size() - i - 1; j++) {
      if (v[j] > v[j + 1]) {
        string temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
      }
    }
  }

  // Output the sorted list to file
  for (int i = 0; i < v.size(); i++) {
    luusx << v[i] << endl; // Add newline character after each string
  }

  // Close the file streams
  danhsach.close();
  luusx.close();

  return 0;
}
