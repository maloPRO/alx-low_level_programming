#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i, j;
	int temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
