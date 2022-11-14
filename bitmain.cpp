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
  //initialize unsigned integer
  unsigned int bit = 0;

  //display in binary form (32-bits)
  bitset<32> x(bit);
  cout << x << endl;


  system("pause");
}
