#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define byte unsigned char
#define UINT_MAX (1 << 32)
#include <math.h>


int main (int argc, char * argv[], char ** envp){
int offset = 0x30;
int number = 0;
char ascii_value;
int retval;
int digit;
int MAX_INT = 2 ^ 32;

  retval = read(0, &ascii_value, 1);
    while((retval == 1) && (ascii_value != '\n')){
    digit = ascii_value - offset;
          if(digit != 1 && digit != 0){
            return 1;
          }
          if(digit == 1 || digit == 0){
            number = (number << 1) + digit;
          }
            retval = read(0, &ascii_value, 1);

        }
        if(number > pow(2,32)){
              fprintf(stderr, "Error Detected!\n");
                return 1;
              }
          else{
              printf("%u\n", number);
              return 0;
          }
    }

