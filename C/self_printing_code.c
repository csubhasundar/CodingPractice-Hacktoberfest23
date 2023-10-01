#include <stdio.h>

void self_print();
void main(){self_print();} 

void self_print()
    {
     char c;  // to print the source code
     FILE *file = fopen(__FILE__, "r");  // __FILE__ gets the location of the current C program file
     do {
         c = fgetc(file);  //printing the contents of the file
         putchar(c);
        }
     while (c != EOF);
     fclose(file);
    }

