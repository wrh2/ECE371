#include <stdio.h>

typedef unsigned char *byte_pointer; //defined data type byte_pointer

//this function shows the bytes for a given value
void show_bytes(byte_pointer start, int len)
{
  for (int i=0; i<len; i++)
    {
      printf(" %.2x", start[i]); //print hex value
    }
  printf("\n"); //new line
}

int main()
{
  int j = 0x01234567;
  show_bytes((byte_pointer)&j, sizeof(int));
  return 0;
}

