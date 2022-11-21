//bitmain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//November 14, 2022

#include "bitmanipulations.h"
#include <sstream>

using namespace std;

int main()
{
  //initialize unsigned integer
  unsigned int bit = 0;
  bitset<32> x(bit);

  string command;
  unsigned int bit_number;
  string input;

  cout << x << endl;
  while (true)
  {
    unsigned int mask = 0x0F >> 3;
    bitset<32> y(mask);
    cout << "> ";
    getline(cin, input);
    stringstream ss1(input);
    if (ss1 >> command)
    {
      if (ss1 >> bit_number)
      {
        y <<= bit_number;
        if (command=="on")
        {
          cout << "Function on will turn " << bit_number << " on.\n";
          x |= y;
        }
        else if (command=="off")
        {
          cout << "Function off will turn " << bit_number << " off.\n";
          x &= (~y);
        }
        else if (command=="toggle")
        {
          cout << "Function toggle will toggle " << bit_number << ".\n";
          x ^= y;
        }
        else
        {
          cout << "Invalid command. Try again"<< endl;
          continue;
        }
      }
      else if (command=="exit")
      {
        cout << "Terminating Bit Manipulations..." << endl;
        return 0;
      }
      else
      {
        cout << "Invalid command. Try again"<< endl;
        continue;
      }
    }
  cout << x << endl;
  }
}
