#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for (size_t i = 0; i < txt.length(); i++)
  {
   cout << txt[i] << endl;
  }
  
  return 0;
}
