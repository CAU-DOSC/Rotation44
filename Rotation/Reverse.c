#include "header.h"

void Rev(int Length, int D, char* Str)   //Reverse하는 함수
{
	reverse(0, D - 1, Str);
	reverse(D, Length - 1, Str);
	reverse(0, Length - 1, Str);
}
void reverse(int start, int end, char* Str) //Reverse하는 함수에 포함되어 있는 함수
{
	char temp = NULL;
	int cnt = 0;
	for (int i = start; i < (start + end - 1) / 2 + 1; i++, cnt++)
	{
		temp = Str[i];
		Str[i] = Str[end - cnt];
		Str[end - cnt] = temp;
	}
}