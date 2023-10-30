#include <stdio.h>
#include <stdlib.h>

int give_change(int money);

/**
 * main - Entry point, calculates the minimum number of coins for change
 * @argc: Number of arguments.
 * @argv: Amount of money given in singles.
 *
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int money, change;

	money = change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	change = give_change(money);

	printf("%d\n", change);
	return (0);
}

/**
 * give_change - Calculates the minimum number of coins for change
 * @money: Amount of money given in singles.
 *
 * Return: Minimum number of coins.
 */
int give_change(int money)
{
	int one, two, five, ten, tf, sum;

	sum = one = two = five = ten = tf = 0;

	if (money <= 0)
	{
		return (0);
	}

	if (money >= 25)
	{
		tf = money / 25;
		money -= tf * 25;
	}

	if (money < 25 && money >= 10)
	{
		ten = money / 10;
		money -= ten * 10;
	}

	if (money < 10 && money >= 5)
	{
		five = money / 5;
		money -= five * 5;
	}

	if (money < 5 && money >= 2)
	{
		two = money / 2;
		money -= two * 2;
	}

	if (money < 2)
	{
		one = money;
	}

	sum = tf + ten + five + two + one;
	return (sum);
}

