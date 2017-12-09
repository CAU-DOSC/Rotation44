# README file for TEAM[4,4]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

<프로젝트 요약>

- Input data 를 생성하는 function gendata로 str, n, d data를 생성
- trivial solution, juggling / block-swap / reverse 4가지 방법으로 구분
- String length와 rotate distance에 따른 수행시간의 차이를 비교 출력

<역할 분담>

- main : 김병주
- trivial solution : 이찬영
- juggling : 유승훈
- blockswap : 최승원
- reverse : 박소현


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

- 파일명 : header.h
- 사용된 헤더파일 : <stdio.h>, <stdlib.h>, <string.h>, <math.h> <time.h>
- main에 사용할 함수 선언 : BS, Swap, Rev, reverse, trivial

< test's result >

String distance Rotate distance Trivial      Reverse    Juggling   BS

100		3		0.000000ms   0.000000ms 0.000000ms 0.000000ms
1000            10              2.000000ms   0.000000ms 0.000000ms 0.000000ms
10000		1234		28.000000ms  0.000000ms 14.00000ms 0.000000ms
10000		3000 		160.000000ms 0.000000ms 0.000000ms 0.000000ms
100000          30            	38.000000ms  3.000000ms 5.000000ms 2.000000ms
1000000		10000		26554.0000ms 3.000000ms 4.000000ms 3.000000ms
1000000		30		77.000000ms  4.000000ms 8.000000ms 3.000000ms

< 추론 결과 >

(string distance : n, rotate distance : d)

trivial 방식의 경우 실행할 때, 로테이트하고 싶은 만큼 n X d번 계산해주어야하기
때문에 가장 오래걸린다. >> (n X d)

juggling 방식은 n, d의 관계에 따라 실행시간이 달라진다. n,d 가 서로소의 관계일 경우
오래걸리지만, 최대공약수가 커질수록 빠른 시간을 나타낸다. >> ( 최소 n번 )

reverse 총 3번 계산이 이루어지는데 앞에서 d만큼, 나머지부분 n-d, 전체부분 n에서 각각
d/2번, (n-d)/2번, n/2번의 계산이 이루어져 총 n번의 계산이 이루어진다. >> ( n번 )

block - swap 좌우 길이를 비교하여 짧은 길이만큼의 계산과정을 좌우 길이가 같을때까지
반복해준다. 따라서 최악의 경우 n번의 계산이 걸리게 된다. 
d가 n의 약수일 경우, 약수중에서 큰 수 일수록 더 빠른 계산이 이루어진다.>> ( 최대 n번 )

따라서, block - swap > reverse > juggling > trivial ( 빠르기 순서)