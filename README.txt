# README file for TEAM[4,4]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

<������Ʈ ���>

- Input data �� �����ϴ� function gendata�� str, n, d data�� ����
- trivial solution, juggling / block-swap / reverse 4���� ������� ����
- String length�� rotate distance�� ���� ����ð��� ���̸� �� ���

<���� �д�>

- main : �躴��
- trivial solution : ������
- juggling : ������
- blockswap : �ֽ¿�
- reverse : �ڼ���


< fuction descriptions >

name : trivial
input parameter : char *str, int n, int d
output parameter : void

name : jug
input parameter : int d, int num, char *vector, int gcd
output parameter : void

name : BS
input parameter : int Length, int D, char *str
output parameter : void

name : swap
input parameter : int a, int z, int sD, char *str
output parameter : void

name : Rev
input parameter : int Length, int D, char *str
output parameter : void

name : reverse
input parameter : int start, int end, char *str
output parameter : void


< Declaration of important data and data types in user header file>

- ���ϸ� : header.h
- ���� ������� : <stdio.h>, <stdlib.h>, <string.h>, <math.h> <time.h>
- main�� ����� �Լ� ���� : BS, Swap, Rev, reverse, trivial

< test's result >

String distance Rotate distance Trivial      Reverse    Juggling   BS

100		3		0.000000ms   0.000000ms 0.000000ms 0.000000ms
1000            10              2.000000ms   0.000000ms 0.000000ms 0.000000ms
10000		1234		28.000000ms  0.000000ms 14.00000ms 0.000000ms
10000		3000 		160.000000ms 0.000000ms 0.000000ms 0.000000ms
100000          30            	38.000000ms  3.000000ms 5.000000ms 2.000000ms
1000000		10000		26554.0000ms 3.000000ms 4.000000ms 3.000000ms
1000000		30		77.000000ms  4.000000ms 8.000000ms 3.000000ms

< �߷� ��� >

(string distance : n, rotate distance : d)

trivial ����� ��� ������ ��, ������Ʈ�ϰ� ���� ��ŭ n X d�� ������־���ϱ�
������ ���� �����ɸ���. >> (n X d)

juggling ����� n, d�� ���迡 ���� ����ð��� �޶�����. n,d �� ���μ��� ������ ���
�����ɸ�����, �ִ������� Ŀ������ ���� �ð��� ��Ÿ����. >> ( �ּ� n�� )

reverse �� 3�� ����� �̷�����µ� �տ��� d��ŭ, �������κ� n-d, ��ü�κ� n���� ����
d/2��, (n-d)/2��, n/2���� ����� �̷���� �� n���� ����� �̷������. >> ( n�� )

block - swap �¿� ���̸� ���Ͽ� ª�� ���̸�ŭ�� �������� �¿� ���̰� ����������
�ݺ����ش�. ���� �־��� ��� n���� ����� �ɸ��� �ȴ�. 
d�� n�� ����� ���, ����߿��� ū �� �ϼ��� �� ���� ����� �̷������.>> ( �ִ� n�� )

����, block - swap > reverse > juggling > trivial ( ������ ����)