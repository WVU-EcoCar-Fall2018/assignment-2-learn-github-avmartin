#include <iostream>
#include <bitset>
using namespace std;

int main() {
  //01 40 00 00 00
  unsigned short bytes = 0x0140;
  unsigned short bytes1 = bytes & 0x3FFF; //masking first two bits
  bitset<16> bset{bytes};
  cout << bset << endl; //data to be converted

  unsigned short converted = bytes1 >> 5;
  cout << converted << endl; //converted answer

  cout << endl; //line break in between CAN messages

  //06 40 00 00 00
  bytes = 0x0640;
  bytes1 = bytes & 0x3FFF;
  bitset<16> bset2{bytes};
  cout << bset2 << endl;

  converted = bytes1 >> 5;
  cout << converted << endl;

  cout << endl;

  //09 60 00 00 00
  bytes = 0x0960;
  bytes1 = bytes & 0x3FFF;
  bitset<16> bset3{bytes};
  cout << bset3 << endl;

  converted = bytes1 >> 5;
  cout << converted << endl;

  cout << endl;

  //0C 80 00 00 00
  bytes = 0x0C80;
  bytes1 = bytes & 0x3FFF;
  bitset<16> bset4{bytes};
  cout << bset4 << endl;

  converted = bytes1 >> 5;
  cout << converted << endl;

  return 1;
}
