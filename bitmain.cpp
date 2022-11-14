//bitmain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//November 14, 2022

#include "bitmanipulations.h"
#include <sstream>

int main()
{
  //initialize unsigned integer
  unsigned int bit = 0;
  std::bitset<32> x(bit);
  std::string command;
  unsigned int bit_number;
  std::string input;

  while (true)
  {
    std::cout << "> ";
    getline(std::cin, input);
    std::stringstream ss1(input);
    if (ss1 >> command)
    {
      if (ss1 >> bit_number)
      {
        if (command=="on")
        {
          std::cout << "Function on will turn " << bit_number << " on.\n";
        }
        else if (command=="off")
        {
          std::cout << "Function off will turn " << bit_number << " off.\n";
        }
        else if (command=="toggle")
        {
          std::cout << "Function toggle will toggle " << bit_number << ".\n";
        }
        else
        {
          std::cout << "Invalid command. Try again"<<std::endl;
          continue;
        }
      }
      else if (command=="exit")
      {
        std::cout << "Terminating Bit Manipulations..." << std::endl;
        return 0;
      }
      else
      {
        std::cout << "Invalid command. Try again"<<std::endl;
        continue;
      }
    }
  std::cout << x << std::endl;
  }
}
