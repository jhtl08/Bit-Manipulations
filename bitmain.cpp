//bitmain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//November 24, 2022

#include "bitmanipulations.h"
#include <sstream>

using namespace std;

int main()
{
  //initialize unsigned integer
  unsigned int a = 0;
  bitset<32> x(a);

  string command;
  int bit_number;
  string input;

  cout << bitstring(a) << endl;
  while (true)
  {
    unsigned int mask = 1;
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
          x |= y;
        }
        else if (command=="off")
        {
          x &= (~y);
        }
        else if (command=="toggle")
        {
          x ^= y;
        }
        else
        {
          cout<<"Invalid command. Use on, off, toggle, or exit."
          << endl;
          continue;
        }
        if (bit_number<0 || bit_number>31)
        {
          cout<<"Invalid index. Use numbers 0 to 31."<<"\n";
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
        cout<<"Invalid command. Make sure to input a correct index."
        <<endl;
        continue;
      }
    }
  cout << bitstring(x.to_ulong()) << endl;
  }
}
