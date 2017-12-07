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

1. trivial 방식으로 한칸 씩 문자열을 정해진 칸수가 될때 까지 rotate 하는 함수-->>

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

- - - - - - - - - - - - - - - - - - - - 

*수행 결과*
test_result.txt 파일로 확인 가능.

- - - - - - - - - - - - - - - - - - - - 

*추론*

String length를 n, Rotate distance를 d로 받았다.

가장 효율이 낮은 Trivial 함수는 n길이의 문자열을 하나하나 d만큼 로테이트하기 때문에 네 함수 중에서 유일하게 d의 크기에 크게 영향을 받는다.
가장 긴 시간을 소요했으며 문자열의 길이가 10000000을 넘어가자 오류가 발생했다. 

Reverse 함수는 세번에 나눠 로테이트를 진행하며 각각 d, n-d, n의 절반씩 로테이트를 수행, 즉 n만큼을 수행하게 되며 수행 결과 n에게 영향을 받는 것을 확인할 수 있다.

Juggle 함수는 Trivial 함수가 n*d만큼 수행할 때, n만큼을 수행한다. n과 d의 최대공약수에 영향을 받으며, 최대공약수의 크기만큼 문자열을 나눠 로테이트한다. 따라서 최대공약수가 클수록 문자열은 작은 세트로 나뉘어 로테이트 되게 되고 최대공약수가 작을수록 더 긴 시간이 걸리게 된다.

Block Swap 함수는 문자열을 두 부분으로 나누어 원하는 문자열이 될 때까지 재귀로 로테이트하는 함수이다. 문자열을 n의 길이와 같아질 때까지 재귀로 나뉘므로 n의 영향을 받는다.

약 500번의 프로그램 실행을 통해 소요되는 시간을 확인하고 평균 효율을 구했다. 그 결과, 각 함수의 평균 효율과 시간복잡도는 다음과 같다. (효율 계산식 = n / 소요시간 / 100000) 수행을 통해 Trivial을 제외한 함수들은 d값에 있어서 큰 영향을 받지 않으며, n이나 n과 d의 관계에 더 큰 영향을 받음을 확인 가능하다.

함수            평균 효율        시간 복잡도
Trivial		8.223           O(n*d)
Juggle		33953.862       O(n)
Block Swap 	3172.554        O(n)
Reverse		2726.835        O(n) 

효율이 높은 순서는 다음과 같다.

Juggle > Block Swap > Reverse > Trivial

- - - - - - - - - - - - - - - - - - - - 

