#include "main.h"/*For the prototype*/
#include <stdlib.h>/*For malloc*/
#include <stdio.h>/*For NULL8*/

/**
* *string_nconcat - function that concatenates two strings.
* @n: Controlling parameter
* @s1: String 1
* @s2: Second string
* Return: Concatenated String
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int srlen1 = 0;
	unsigned int srlen2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		srlen1++;
	for (i = 0; s2[i] != '\0'; i++)
		srlen2++;

	result = malloc(sizeof(char) * (srlen1 + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= srlen2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			result[srlen1 + i] = s2[i];
		result[srlen1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[srlen1 + i] = s2[i];
		result[srlen1 + i] = '\0';
	}
	return (result);
}
