/*
 ============================================================================
 Name        : Chapter_14_Challenge_1.c
 Author      : Goran Vujnovic
 Version     :
 Copyright   : Your copyright notice
 Description : Challenge 1
               Write function increment() which returns void and has one integer pointer argument.
               Function will increment by 1 value of variable passed to it.
               Test it.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void increment(int* ptr)
{
	(*ptr)++;
}

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("You have entered a number: %d\n", num);

	increment(&num);

	printf("Number after increment: %d", num);

}
