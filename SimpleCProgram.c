/* Jeremy Higgins
   ECE 373
   Instructors PJ Waskiewicz Jr. and Shannon Nelson
   Higgins, Jeremy
   Assignment #1.C - Simple C Program
   
   The purpose of this program is to demonstrate simple C programming.
   Program accepts an integer argument from the command line,
   adds five (5) and returns the result to cout. 
*/

/* Include required libraries. */
#include <stdio.h>   /* Required for printf() function. */
#include <stdlib.h>  /* Required for C Library Functions. */
#include <iostream>  /* Required for cout and endl. */

/* Main function. */
int main(int argc, char *argv[])
{
  /* Create integer for calculation. */
  int input_num;
  
  /* Check arguments.  */
  if(argc != 2){
    printf("Program requires an integer. Exiting.\n\n");
    exit(-1);
  } /* if ends. */
  
  else {
    /* Convert input String into an Integer. */
    /* This being a "Simple" program, no error checking is done. */
    input_num = atoi(argv[1]);
    
    /* Add 5 to user's number, then echo result. */
    printf("Received %d.\n%d + 5 = %d.\n\n", input_num, input_num, (input_num + 5));
    
    /* Exit program successfully. */
    exit(0);
  } /* else ends. */
} /* main() ends. */
