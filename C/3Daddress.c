//To calculate the address in a 3D Array
#include <stdio.h>
#include <stdlib.h>
void tester(int,int,int,int,int);

int main() 
{
    // to declare a pointer pointing to another pointer and all the other variables used in this 3dadderess code
    int ***Array; 
    int Row, Column,Height,itr1,itr2,itr3,size1block,memoryaddress;
    size1block=sizeof(int);
    //To Input the number of Rows,Columns and Height of the 3D array
    printf("Input the number of Rows in the 3D Array: ");
    scanf("%d", &Row);
    printf("Input the number of Columns in the 3D Array: ");
    scanf("%d", &Column);
    printf("Input the Height of the 3D Array: ");
    scanf("%d", &Height);
    // Using DMA to allocate the memory 
    Array = (int ***)malloc(Height * sizeof(int **));
    for (itr1 = 0; itr1 < Height; itr1++) 
    {
        Array[itr1] = (int **)malloc(Row * sizeof(int *));
        for (itr2 = 0; itr2 < Row; itr2++) 
        {
            Array[itr1][itr2] = (int *)malloc(Column * sizeof(int));
        }
    }
    int *first = (int*)&Array[0][0][0];    //to set the base address of the array
    if (first == NULL) 
    {
        printf("Memory allocation failed.\n");
        // To Check if the allocation of memory was done successfully
        return 1;
    }
    //call function 
    tester(Row,Column,Height,size1block,first);
    // To Free the allocated memory
    for (int i = 0; i < Row; i++) {
        free(Array[i]);
    }
    free(Array);
    return 0;
}

void tester(int Row ,int Column ,int Height ,int size1block,int first)
{
    int itr1,itr2,itr3,memoryaddress;
    char character;

    do
    {
        printf("\n Input The Row Number: ");
        scanf("%d",&itr1);
        printf ("\n Input The Column Number.: ");
        scanf("%d",&itr2);
        printf("\n Input height level: ");
        scanf("%d", &itr3);
        if(itr1>Row||itr2>Column||itr3>Height||itr1<0||itr2<0||itr3<0)
        {
            printf("The Memory entered is Unallocated\n");
        }
        else
        {
            memoryaddress = (int)first + (itr3 * Row * Column + itr1 * Column + itr2) * size1block;
            printf("\nMemory address of Inputted location is: %p \n", (void *)memoryaddress);
        }
        printf("Do you want to try again:- Y/y for Yes\n");
        scanf(" %c",&character);
    }while(character=='Y'||character=='y');
}

