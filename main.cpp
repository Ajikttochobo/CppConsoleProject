#include <iostream> // input output stream 불러옴

int main() { // main 함수, int 쓰는 이유는 문제없이 작동하면 return 0, 문제 있으면 1
    std::cout << "Hello, World!";
    //std는 c++ 표준 라이브러리
    //:: 는 범위 지정 연산자(std 라이브러리 안에 라는 뜻)
    //cout는 character output이라는 뜻 (문자 출력 스트람)
    //<<는 삽입 연산자, 오른쪽에 있는 데이터를 출력 통로로 집어넣음
    //endl은 줄바꿈 추가
    return 0;
}

// 실행할때
// g++ main.cpp -o app
// ./app

