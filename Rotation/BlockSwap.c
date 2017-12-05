#include "header.h"

void BS(int Length, int D, char* Str)      //BlockSwap
{
	int A = 0, Z = Length - 1;             //��ó�� �ǳ� ��ǥ
	int L = D, R = Length - D;             //�� �� ����
	while (L != R)                         //�� �� ���̰� �������������� �ݺ�
	{
		if (L < R)
		{
			Swap(A, Z, L, Str);
			Z -= L;
			R -= L;
		}
		else
		{
			Swap(A, Z, R, Str);
			A += R;
			L -= R;
		}
	}
	Swap(A, Z, R, Str);                    //�� �� ���̰� ������ ���������� swap���ְ� ��ħ
}
void Swap(int a, int z, int sD, char* Str) //Str[a]~Str[z]�߿��� �յڿ��� ���� sD��ŭ �ٲ��ִ� �Լ�
{
	char temp = NULL;
	for (int i = 0; i < sD; i++)
	{
		temp = Str[a + i];
		Str[a + i] = Str[z - sD + i + 1];
		Str[z - sD + i + 1] = temp;
	}
}