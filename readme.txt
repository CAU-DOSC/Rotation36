# README file for TEAM[3,6]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.
- - - - - - - - - - - - - - - - - - - -

*만들 함수 내역*

trivial-->>   이윤주
juggle-->>    이윤주
blockswap-->> 김혜리
reverse-->>   고재원
printhead-->> 김혜리
printresult-->>송민준
header--> 송민준
main-->이지호

이중 하나 골라서 만들어 주시면 됩니다.

- - - - - - - - - - - - - - - - - - - - 
파일들의 기본 형태를 잡았습니다.
main.c에 기본적인 변수를 선언했습니다.
- - - - - - - - - - - - - - - - - - - - 

*만들어야 하는 함수 내용*

1. trivial 방식으로 한 칸씩 문자열을 정해진 칸수가 될때 까지 rotate 하는 함수-->>
 void trivial(char*tri);
 
2. juggle 방식으로 문자열을 정해진 칸수씩 반복해서 rotate하는 함수-->>
 void juggle(char *jug);
 
3. blockswap 방식으로 문자열을 두 부분으로 나누어 원하는 문자열이 될 때 까지 재귀로 rotate 하는 함수-->>
 void blockswap(char *str, int d, int n);
  
4. reverse 방식으로 문자열을 두 부분으로 나누어 각각 reverse하고 전체를 reverse하는 함수-->>
 void reverse(char *str1, int a, int b);
   
5. 목록을 출력하는 함수-->>
 void printhead();
     
6.목록별 걸리는 시간을 출력하는 함수-->>
void printresult();



-------------------------------------
*프로그램 구성도*

header.h ----------
여러 헤더 파일(stdio.h, stdlib.h, string.h, time.h)의 include
전역(global) 변수의 선언
프로그램 실행에 필요한 함수 원형의 선언(void trivial, void juggle 등..)


function.c ---------
함수 선언

gendata 함수 : str = (char*)malloc(sizeof(char)*(n+1));로 n의 크기에 비례해서 동적 메모리를 할당하게 하였다. 또한 str이라는 문자열의 내용을 abcdefg...의 순서대로 n의 크기만큼 반복해서 채웠다.

trivial 함수: 한 칸씩 문자열의 모든 문자를 옮기는 행위를 반복문을 사용하여 n * d번 하였다.

juggle 함수 : 문자열의 문자를 d만큼 하나하나 옆으로 옮기는 행위를 n/d만큼 반복하였다.

swap 함수: 특정 문자열과 또 다른 특정 문자열을 바꾸는 함수이다.

blockswap 함수 : 만들어둔 swap함수를 이용하여 문자열을 두 부분으로 나눠 조건에 따라 swap 함수의 인자로 다른 값을 전달하게 만들었다.

reverse  함수 : 문자열을 거꾸로 뒤집어 temp에 저장하고, 다시 str이라는 기존 문자열에 temp를 덮어쓰게 하였다.

reversal 함수 : 문자열을 두 부분으로 나누어 reverse 함수를 3번 하게 하였다.

printhead 함수 : Strlength, RotateDistance, T.trivial, 등 출력되는 변수의 head 설명을 출력하게 하였다.

printresult 함수 : 함수가 실행되는데 걸리는 시간을 출력하는 함수이다.



main.c---------------------

clock 함수를 사용하여 4개의 함수를 실행할 때 각각의 소요시간을 측정하게 하였다.
---------------------------



- - - - - - - - - - - - - - - - - - - - 
*수행 결과*
test_result.txt 파일로 확인 가능.
- - - - - - - - - - - - - - - - - - - - 

*추론*
String length를 n, Rotate distance를 d로 받았다.

Trivial 함수는 가장 효율이 낮으며 n길이의 문자열을 하나하나 d만큼 로테이트하기 때문에 
네 함수 중에서 유일하게 d의 크기에 크게 영향을 받는다.

Trivial 함수는 말 그대로 사소한, 하찮은 이라는 뜻으로 가장 효율성이 떨어지는 알고리즘이다.
n=500000, d=1000 일 때 소요시간이 1.487초가 소요되었으며 n*d에 소요시간이 비례하므로
n=10000000, d=1000000 일 때 계산에 필요한 시간이 약 8.3시간이라는 어마어마한 시간이 걸린다는 결과를 추론할 수 있다.

Reversal 함수는 문자열을 d를 기준으로 d, n-d 이렇게 두 부분으로 나눠 각 부분을 reverse 시키고,
전체를 한 번 더 reverse 시키는 방식으로 로테이트를 진행하며 결과적으로 소요 시간이 d랑 상관없이 n의 크기에만 영향을 받는다는 것을 알 수 있다.

Juggle 함수는 Trivial 함수가 n*d만큼 수행할 때, n만큼을 수행한다. n과 d의 최대공약수에 영향을 받으며,
최대공약수의 크기만큼 문자열을 나눠 로테이트한다. 따라서 최대공약수가 클수록 문자열은 작은 세트로 나뉘어 로테이트 되게 되고
최대공약수가 작을수록 더 긴 시간이 걸리게 된다.

Block Swap 함수는 문자열을 두 부분으로 나누어 원하는 문자열이 될 때까지 재귀로 로테이트하는 함수이다.
문자열을 n의 길이와 같아질 때까지 재귀로 나뉘므로 n의 영향을 받는다.


약 500번의 프로그램 실행을 통해 소요되는 시간을 확인하고 평균 효율을 구했다.
그 결과, 각 함수의 평균 효율과 시간복잡도는 다음과 같다.
(효율 계산식 = n / 소요시간(sec) / 100000) 


수행을 통해 Trivial을 제외한 함수들은 d값에 있어서 큰 영향을 받지 않으며, 
n이나 n과 d의 관계에 더 큰 영향을 받음을 확인 가능하다.


함수            평균 효율        시간 복잡도
Trivial	       	8.223           O(n*d)
Juggle          33953.862       O(n)
Block Swap     	3172.554        O(n)
Reverse	       	2726.835        O(n) 


효율이 높은 순서는 다음과 같다.

Juggle > Block Swap > Reverse > Trivial

- - - - - - - - - - - - - - - - - - - - 
