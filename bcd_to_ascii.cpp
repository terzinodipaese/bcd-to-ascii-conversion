#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  const int array[] = {0x32, 0x33, 0x58, 0x49};
  int clear1 = 0xF0, clear2 = 0x0F;
  char ascii;

  for(int i=0; i<4; i++)
  {
    ascii = array[i] & clear1;
    ascii = ascii >> 4;
    ascii += 48;
    cout << ascii;

    ascii = array[i] & clear2;
    ascii += 48;
    cout << ascii << " ";
  }

  cout << endl;

  return 0;
}
