#include <stdio.h>

/**
 * main - Entry Level
 * Followed by a new line except q and e
 * Return: Always 0
 */
int main(void)
{
	char low

	for (low = 'a'; low <= 'z'; low++)
		if (low == 'q' || low == 'e')
			continue;
				putchar(low);
	putchar('\n');
	return (0);
}
