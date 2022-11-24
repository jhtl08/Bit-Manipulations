//bitmanipulations.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//November 24, 2022

#include "bitmanipulations.h"

std::string bitstring(unsigned int a)
{
  char *s = new char[8*sizeof(int)*2];
  s[63]=0;
  int i=0;
  unsigned int mask = 1 << 31;
  if (a & mask)
    s[i]='1';
  else
    s[i]='0';
  i++;
  mask = mask >> 1;
  while(mask > 0)
  {
    s[i] = ' ';
    i++;
    if (a & mask)
      s[i]='1';
    else
      s[i]='0';
    i++;
    mask = mask >> 1;
  }
  return std::string(s);
}
