#include "main.h"
/**
 *is_palindrome - checks if string is palindrome
 * @s: input string
 * Return: checking result
*/

int is_palindrome(char *s)
{
	int index = 0;

	int len = stlen(s);

	if (!(*s))
		return (1);

	return (palindrome(s, len, index));
}
/**
 * palindrome - help function is_palindrome.
 * @s: input string
 * @len: The length of s.
 * @index: The index
 * Return: 0 or 1
 */

int palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (palindrome(s, len, index + 1));

	return (0);
}
/**
 * stlen - Returns the length of a string.
 * @s: The string
 * Return: The length
 */

int stlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += stlen(s + len);
	}

	return (len);
}
