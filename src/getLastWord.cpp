/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	char *temp = (char *)malloc(sizeof(char)* 100);
	int i, len, p = 0, j, flag = 1;
	for (len = 0; str[len] != '\0'; len++);
	for (i = len - 1; (str[i] != ' '), (i >= 0); i--)
	{
		if (str[len - 1] == ' ' && flag == 0)
		{
			break;
		}
		else if (str[len - 1] == ' ' && flag != 0)
		{
			len--;
		}
		else
		{
			flag = 0;
			temp[p] = str[i];
			p++;
			len--;
		}
	}
	temp[p] = '\0';
	for (i = 0, j = p - 1; i < p / 2; i++, j--)
	{
		char t = temp[i];
		temp[i] = temp[j];
		temp[j] = t;
	}
	return temp;
}
