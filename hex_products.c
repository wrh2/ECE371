#include <stdio.h>

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
