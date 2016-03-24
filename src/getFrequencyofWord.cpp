/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int length(char *temp);
bool compare(char *str, char *word, int p);

int count_word_in_str_way_1(char *str, char *word)
{
	int i, frequency = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == word[0])
		{
			if (compare(str, word, i))
				frequency++;
		}
	}
	return frequency;
}

int length(char *temp)
{
	int i;
	for (i = 0; temp[i] != '\0'; i++);
	return i;
}

bool compare(char *str, char *word, int p)
{
	int i;
	for (i = 0; i < length(word); i++)
	{
		if (str[p] != word[i])
			return false;
		p++;
	}
	return true;
}


/*int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}*/

