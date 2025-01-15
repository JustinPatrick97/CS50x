// Problem 1: Print Array
// Write a program that defines an array of integers and prints each element on a new line.

#include <stdio.h>

int array(int length, int x);

int main(void)
{
    int x;
    // get value
    int example[x];
    for (int i = 0; i < x; i++)
    {
        example[i] = getline("Enter value: ");
    }

    printf("Value of arrays is as listed: %i ", (example(x, array)));
}

int array(int length, int x)
{
 int sum = 0;
 for (int i = 0; i < length; i++)
 {
    sum += array[i];
 }   
 return sum;
 printf("\n");
}