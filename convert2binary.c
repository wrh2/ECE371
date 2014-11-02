//This program takes a decimal number and converts it to binary
//Programmed by William Harrington

#include <stdio.h>

//This function converts a number to its binary representation
void convert_to_binary(int n)
{
    //Local variables
    int c, k;
    //display number in decimal form
    printf("You entered %i\n", n);
    //display number in hex form
    printf("You entered 0x%x\n", n);
    
    //start displaying binary
    printf("In binary is: ");
    
    /*  Algorithm steps:
        1) create a for loop
        2) perform a bit shift on the number received (n)
        by the loop increment (c) and storing it in k.
        3) then perform a bitwise and on k with 1
     */
    for (c = 31; c >= 0; c--)
    {
        k = n >> c;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n"); //for readability
}

//this function determines whether the user would like to continue
//running the program
int again(char prompt[])
{
  //Local variables
    int response;
    
    //display message to user
    printf("%s", prompt);
    //get the response
    scanf("%d",&response);
    
    return response; //return the response
}

//main function
int main()
{
    //Local variable
    int n; //number to get from user
    
    //using a do while loop
    //get a number from user until they no longer want to run the program
    //
    //note: the condition in the while() portion of this code is evaluated
    //      after the loop has been executed at least once...furthermore the
    //      condition is a function call that evaluates a users response
    //      should the user want to keep going this condition will be true
    //      and the do while loop will execute again.
    do
    {
      printf("Enter a number:"); //prompt user to enter a number
      scanf("%d", &n); //read in the users number
      convert_to_binary(n); //convert that number to binary   
    }while(again("Would you like to convert another number? (1 for Yes, 0 for No): "));
    return 0; //end of program
}
