#include <stdio.h>
//The purpose of this program is to help you understand the endiannes of the machine your on
//Programmed by William Harrington


int main()
{
  //Local variables
  unsigned int i=1; //assign a simple value to our variable
  
  //the following line is an example of casting
  char *c =(char*)&i; //c points to a char, this is simply an address. We cast i to a char pointer, using the ampersand to get its address which c points to.
  
  //we have the address of our local variable at this point and we know that the size of the character is 1 byte (4 bits)
  //if you are on a little endian machine dereferencing pointer to this address (or going to this address) will contain the value 1
  //because the last byte is stored first and if your machine is big endian then it will be 0
  //lets take a look at the output
  printf("The address of the local variable: %x\n", c);
  printf("The actual variable value: %x\n", *c);
  
  //you're on a little endian machine therefore this condition will be true
  if(*c)
    printf("Little Endian\n");
  //otherwise you are on a big endian machine
  else
    printf("Big Endian\n");
  return 0;
}
