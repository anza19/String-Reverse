/*
 * reverse_string.c
 *
 *  Created on: Jan 25, 2018
 *      Author: Anza
 */

#include <stdio.h>
#include <stdlib.h>

//string reversal functions
int lengthOfString(char *ptr);
void printReversedString(char *name);

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		printf("Invalid command line arguments received. Exiting program.\n");
		return 1;
	}
	char *placeHolder = argv[1];
	printf("Original string = %s \n", placeHolder);
	printf("Size of the string = %d.\n",lengthOfString(placeHolder));
	printf("Reversed string = ");
	printReversedString(placeHolder);
	return 0;
}

int lengthOfString(char *ptr)
{
	//setting x to 0, this will be the size variable
	int x = 0;
	//will increment x until the null terminating char is not reached
	while(*ptr != '\0')
	{
		x++;
		//point ptr to next address in memory
		ptr++;
	}
	return x;
}

void printReversedString(char *name)
{
	int length = lengthOfString(name)-1;
	for(int i=length;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	printf("\n");
}
