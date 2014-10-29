#include <stdio.h>
//This program is taken from Dr. Hall's book on Microprocessors (page 121)
//With only a slight modification of actually printing out the products
//This will give you an idea of what to expect for the hex products
//that you program in assembly as part of the homework
//Programmed by William Harrington for ECE371

unsigned short MULTIPLICANDS[] = {0x1111, 0x2222, 0x3333, 0x4444};
unsigned short MULTIPLIERS[] = {0x1111, 0x2222, 0x3333, 0x4444};
unsigned int PRODUCTS[] = {0x0, 0x0, 0x0, 0x0};

int main()
{
  for(int i=3; i>=0; i--)
    {
      PRODUCTS[i] = MULTIPLICANDS[i] * MULTIPLIERS[i];
      printf("Product %d: %x \n",i,PRODUCTS[i]);
    }
  return 0;
}
