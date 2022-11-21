//bitmain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//November 21, 2022

#include "bitmanipulations.h"
#include <sstream>

using namespace std;

int main()
{
  //initialize unsigned integer
  unsigned int bit = 0;
  bitset<32> x(bit);

  string command;
  int bit_number;
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
          cout << "Invalid command. Try again"<< endl;
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
        cout<<"Invalid command. Make sure to input an index."<<endl;
        continue;
      }
    }
  cout << x << endl;
  }
}
