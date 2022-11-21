//bitmain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//November 14, 2022

#include "bitmanipulations.h"
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
  int n;
  string choice;
  //initialize unsigned integer
  unsigned int bit = 0;

  //display in binary form (32-bits)
  bitset<32> x(bit);
  cout << x << endl;

  
  while (true)
  {
    unsigned int mask = 0x0F >> 3;
    bitset<32> y(mask);
    cout << "assume position: " << endl;
    cin >> n;
    cout << "what is your choice? " << endl; //PLACEHOLDER FOR NOW: still need to implement stringstream so it's just 1 command
    cin >> choice;
    y <<= n;
    if (choice == "on") 
    {
      x |= y;
    }
    else if (choice == "off")
    {
      x &= (~y);
    }
    else if (choice == "toggle")
    {
      x ^= y;
    }
    else
    {
      cout << "invalid" << endl;

    }
    cout << x << endl;
  }

  system("pause");
}
