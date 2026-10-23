#include <iostream>
#include <string> //string은 기본 자료형 아니어서 include로 가져와야

// using namespace std를 써서 앞으로 'std::'를 생략합니다!
using namespace std;

// [함수 정의] 게임 인트로를 출력해주는 간단한 함수
void showIntro() {
    cout << "========================================" << endl;
    cout << "      [C++ 기초 총집합 콘솔 게임]       " << endl;
    cout << "========================================" << endl;
}

int main() {
    // 1. 변수 선언 및 초기화
    string playerName;
    int targetNumber = 7; // 맞추어야 할 정답 숫자
    int userGuess = 0;
    int attemptCount = 0;

    // 인트로 함수 호출
    showIntro();

    // 2. 문자열 입력 받기
    cout << "플레이어의 닉네임을 입력하세요: ";
    cin >> playerName;
    
    cout << "\n반갑습니다, " << playerName << "님! 1부터 10 사이의 숫자를 맞춰보세요." << endl;

    // 3. 반복문 (while): 정답을 맞출 때까지 계속 실행
    while (true) {
        cout << "\n숫자를 입력하세요 (종료는 -1): ";
        
        // 4. 숫자 입력 받기
        cin >> userGuess;

        // 탈출 조건 (사용자가 -1을 입력하면 종료)
        if (userGuess == -1) {
            cout << "게임을 포기하셨습니다. 다음에 또 도전하세요!" << endl;
            break; // 반복문 탈출
        }

        attemptCount++; // 시도 횟수 증가

        // 5. 조건문 (if - else if - else)
        if (userGuess == targetNumber) {
            cout << "🎉 정답입니다! " << attemptCount << "번 만에 맞췄습니다!" << endl;
            break; // 정답을 맞췄으니 반복문 탈출
        } 
        else if (userGuess < targetNumber) {
            cout << "❌ 그보다 **더 큰** 숫자입니다! 다시 해보세요." << endl;
        } 
        else {
            cout << "❌ 그보다 **더 작은** 숫자입니다! 다시 해보세요." << endl;
        }
    }

    // 6. 포르(for)문 맛보기: 게임 종료 전 3초 카운트다운
    cout << "\n게임을 종료합니다. 3초 뒤에 꺼집니다..." << endl;
    for (int i = 3; i > 0; i--) {
        cout << i << "초..." << endl;
    }
    cout << "안녕히 가세요!" << endl;

    return 0; // 프로그램 정상 종료 (퇴근 카드 0)
}