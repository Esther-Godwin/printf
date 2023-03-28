#include "main.h"

/**
 * count_digits - Counts the number of digits in a number
 * @num: Number to count
 *
 * Return: Number of digits in the number
 */
int count_digits(int num)
{
	int count = 0, abs_num;

	if (num <= 0)
		count++;

	abs_num = num < 0 ? -1 * num : num;

	while (abs_num != 0)
	{
		abs_num = abs_num / 10;
		count++;
	}
	return (count);
}
