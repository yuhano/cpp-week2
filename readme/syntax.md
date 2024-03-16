# 코드에서 사용된 문법 정리

## string 문법

### 필요한 라이브러리

``` c++
#include <iostream>
#include <string>
```

### 변수 선언 및 사용 방법

``` c++
#include <string>
std::string name1;   // 변수 선언 방법
name1 = "lee jeongho";      // 초기화 

std::string name2("lee jeongho");       // 선언 및 초기화
```

### 원소 접근 방법

``` c++
std::string str = "Test"; 

// 아래 방법 둘 다 char 값을 변환한다.
str[1]; // 'e'
str.at(2); //'s', 위 방법 보다 조금 더 안전하다.
```

### 문자열 찾기
``` c++
std::string str = "Test";  

// 반환 값은 찾는 문자의 첫번째 인덱스 값
// 만일 찾는 값이 없으면 쓰레기 값(string::npos) 리턴
str.find("es");       /// 1 값 리턴

if (str.find("ss") != std::string::npos){
    std::cout << str.find("ss");        // 출력 안됨
}
```

## 랜덤 숫자 구현

### 필요한 라이브러리
``` c++
#include <cstdlib>
#include <ctime>
```

### 사용방법
``` c++
std::string generateNumber(){
    srand((unsigned int)time(NULL));        // 랜덤 seed 생성

    char c[4];
    for (int i = 0; i < 3; i++){
        c[i] = (int)rand()%10 +'0';     //  랜덤 숫자 생성
        // (int)rand()%10 : 0~9 사이의 값 출력
        // +'0' : char 인'0'값을 더하여 int 값을 char 값으로 변환
    }

    // string 값 선언할 때 char[]값을 넣어주면 string 값으로 변환된다.
    std::string str(c);

    return str;
}
```

### char ↔ string 변환 방법
``` c++
/// string to char
 char ch1[100];
string a = "LeeJeongho";
strcpy(ch1,a.c_str());

/// char to string 
char ch2[100] = {"LeeJeongho"};
string str(ch2);
    
```

## 기타
``` c++
int isPlaying = 1;

// guessAnswer가 1이면 while을 반복한다.
// guessAnswer가 0이면 while 값을 빠져나오게 된다. 
while(isPlaying){
    isPlaying = guessAnswer(answer);        
}
```