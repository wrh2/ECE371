#include <stdio.h>
//This is another program to help you understand endianness of your machine
//Programmed by William Harrington

typedef unsigned char *byte_pointer; //this line just defines a data type that can be used for variables
//this data type is simply a pointer to a char, this is what we will utilize to get the address of a variable

//this function shows the bytes for a given value
void show_bytes(byte_pointer start, int len)
{
  //iterate over the length
  for (int i=0; i<len; i++)
    {
      printf(" %.2x", start[i]); //print hex value
    }
  printf("\n"); //new line (to make things pretty)
}

//this is the main function
int main()
{
  //local variable
  int j = 0x01234567; //simple hex value here

  show_bytes((byte_pointer)&j, sizeof(int)); //call the function above
  //the first argument (byte_pointer)&j is the address of our local variable and we will
  //dereference it, or in other words go to that address to get the value
  //the second argument is the size of an integer, which is normally 8 bytes or 32 bits
  //the function will interpret this as an int so 8 bytes will make us iterate through
  //the for loop 8 times, and we will dereference the address to get the value stored
  //if you get an output of 67 45 23 01, your machine is little endian
  //if you get an output of 01 23 45 67, your machine is big endian
  return 0;
}

