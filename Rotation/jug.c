#include "header.h"
void *jug(int d, int num, char *vector, int gcd)
{
	int temp;
	int count = gcd;
	while (count <= d)
	{
		for (int i = 0; i < gcd; i++)
		{
			int k = 0;
			temp = vector[i];
			while ((i + k + gcd) < num)
			{
				vector[i + k] = vector[i + k + gcd];
				k = k + gcd;
			}
			vector[i + k] = temp;
		}
		count = count + gcd;
	}
}
int gcd(int num, int d)
{
	while (d != 0)
	{
		int temp = num%d;
		num = d;
		d = temp;
	}
	return num;
}
