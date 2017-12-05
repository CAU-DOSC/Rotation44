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

< ���� ��� >

String distance Rotate distance Trivial      Reverse    Juggling   BS

100		3		0.000000ms   0.000000ms 0.000000ms 0.000000ms
1000            10              2.000000ms   0.000000ms 0.000000ms 0.000000ms
10000		3000 		160.000000ms 0.000000ms 0.000000ms 0.000000ms
100000          1000            390.000000ms 0.000000ms 1.000000ms 0.000000ms
1000000		10000		26554.0000ms 4.000000ms 3.000000ms 4.000000ms