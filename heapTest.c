#include <stdio.h>
#include <string.h>

int main()
{
	char name[100];
	printf("Enter a string, I will reverse it.");
	scanf("%s",name);
	int s = strlen(name)-1;
	int i;
	for(i=s;i>=0;i--){
		printf("%c",name[i]);
	}
	return 0;
}
