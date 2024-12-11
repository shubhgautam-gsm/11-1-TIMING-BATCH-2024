#include <iostream>
using namespace std;

int per(int donkey,int horse) {
    return donkey + horse;
}
int main() {
  int khachar=per(80,20);
  int horsedo=per(120,80);
  
  cout << khachar<<"\n";
  cout << horsedo<<"\n";
  return 0;
}
