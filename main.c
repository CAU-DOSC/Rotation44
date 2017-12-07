#include "header.h"

void gendata(char* CharArrayOfLength, int N);

int main()
{
	clock_t start1, end1, start2, end2, start3, end3, start4, end4;
	char *vector, *rotate;
	int length, rot, G = 0;
	int plusminus = 0;
	printf("Enter the String distance and Rotate distance : ");
	scanf_s("%d %d", &length, &rot);
	if (rot < 0)
	{
		rot = abs(rot);
		plusminus = 1;
	}
	G = gcd(length, rot);
	vector = (char *)malloc(sizeof(char)*(length * 2));
	rotate = (char *)malloc(sizeof(char)*(length * 2));
	gendata(vector, length);
	printf("랜덤으로 받은 문자열 : %s\n",vector);
	
	strcpy(rotate, vector);
	start1 = clock();
	trivial(rotate, length, rot);
	end1 = clock();
	printf("\nTrivial Solution : %s", rotate);

	strcpy(rotate, vector);
	if (plusminus == 0)
	{
		start2 = clock();
		Rev(length, rot, rotate);
	}
	else if (plusminus == 1)
	{
		start2 = clock();
		Rev(length, length - rot, rotate);
	}
	end2 = clock();
	printf("\nReverse          : %s", rotate);
	
	strcpy(rotate, vector);
	if (plusminus == 0)
	{
		start3 = clock();
		jug(rot, length, rotate, G);
	}
	else if (plusminus ==1)
	{
		start3 = clock();
		mjug(rot, length, rotate, G);
	}
	end3 = clock();
	printf("\nJuggling         : %s", rotate);
	
	strcpy(rotate, vector);
	if (plusminus == 0)
	{
		start4 = clock();
		BS(length, rot, rotate);
	}
	else if (plusminus == 1)
	{
		start4 = clock();
		mBS(length, rot, rotate);
	}
	end4 = clock();
	printf("\nBlock - Swap     : %s\n", rotate);

	printf("\nTrivial Solution Running Time : %fms", (double)(end1 - start1));
	printf("\nReverse Running Time          : %fms", (double)(end2 - start2));
	printf("\nJugging Running Time          : %fms", (double)(end3 - start3));
	printf("\nBlock - Swap Running Time     : %fms", (double)(end4 - start4));
	return 0;
	
}

void gendata(char* CharArrayOfLength, int N)
{
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		CharArrayOfLength[i] = (rand() % 26 + 'A');
	CharArrayOfLength[N] = NULL;
}
