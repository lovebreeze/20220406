#pragma once
#include <stdio.h>

void fuc(char * character,void* a)
{
	
	printf("¿œ¥‹");
	if (character == 'int')
	{
		printf("%d", *(int*)a);
	}
	else if (character == "float")
	{
		printf("%f", *(float*)a);
	}
	else if (character == "char")
	{
		printf("%c", *(char*)a);
	}
}