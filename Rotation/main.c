#include "header.h"

void gendata(char* CharArrayOfLength, int N);

int main()
{
	clock_t start1, end1, start2, end2, start3, end3, start4, end4;
	char *vector, *rotate;
	int length, rot, G = 0;
	printf("Enter the String distance and Rotate distance : ");
	scanf_s("%d %d", &length, &rot);
	if (rot < 0)
		rot = length + rot;
	length = length - rot;
	G = gcd(length, rot);
	vector = (char *)malloc(sizeof(char)*(length * 2));
	rotate = (char *)malloc(sizeof(char)*(length * 2));
	gendata(vector, length);
	printf("랜덤으로 받은 문자열 : ");
	for (int i = 0; i < length; i++)
	{
		printf("%c", vector[i]);
	}
	printf("\n");

	strcpy(rotate, vector);
	printf("\nTrivial Solution : ");
	start1 = clock();
	trivial(rotate, length, rot);
	end1 = clock();
	puts(rotate);

	strcpy(rotate, vector);
	printf("Reverse          : ");
	start2 = clock();
	Rev(length, rot, rotate);
	end2 = clock();
	puts(rotate);

	strcpy(rotate, vector);
	printf("Jugging          : ");
	start3 = clock();
	jug(rot, length, rotate, G);
	end3 = clock();
	puts(rotate);

	strcpy(rotate, vector);
	printf("Block - Swap     : ");
	start4 = clock();
	BS(length, rot, rotate);
	end4 = clock();
	puts(rotate);

	printf("\nTrivial Solution Running Time : %fms", (double)(end1 - start1));
	printf("\nReverse Running Time      : %fms", (double)(end2 - start2));
	printf("\nJugging Running Time      : %fms", (double)(end3 - start3));
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
