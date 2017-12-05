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
12/03
파일들의 기본 형태를 잡았습니다.
main.c에 기본적인 변수를 선언했습니다.
header.h에 구조체를 선언하였습니다.
- - - - - - - - - - - - - - - - - - - - 
중요한 자료형


----------------------------------------
만들어야 하는 함수 내용 ( 추가&수정 바람 )

1. trivial 방식으로 한칸 씩 문자열을 정해진 칸수가 될때 까지 rotate 하는 함수-->>

 void trivial(char*tri);

2. juggle 방식으로 문자열을 정해진 칸수씩 반복해서 rotate하는 함수-->>

 void juggle(char *jug);


3. blockswap 방식으로 문자열을 두 부분으로 나누어 원하는 문자열이 될 때 까지 재귀로 rotate 하는 함수-->>

 void blockswap(char *str, int d, int n);
  

4. reverse 방식으로 문자열을 두 부분으로 나누어 각각 reverse하고 전체를 reverse하는 함수-->>

 void reverse(char *str1, int a, int b);
 

5. 함수 별 걸리는 시간을 clock함수로 측정하는 함수-->>

 void Delete_OddNode
  
6. 목록을 출력하는 함수-->>

 void printhead();
     
     
7.목록별 걸리는 시간을 출력하는 함수-->>

void printresult();
