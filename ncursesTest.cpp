#include <ncurses.h>
#include <string>

int main()
{
    int input;
    
    initscr(); // initialization screen, ncurses 전용 화면 제어 모드로 전환하고 초기화
    noecho(); // no echo, 키보드 인풋 다시 보여주는거 끔
    cbreak(); // chareacter break, 엔터 단위로 입력 들어가는 줄 단위 버퍼링 말고 키 단위로 하는거

    while(true)
    {
        input = getch(); //블로킹 함수여서 입력 들어올 때까지 기다림

        if(input == 'a') // 큰따옴표는 문자열, 작은따옴표는 문자. 키 고유번호와 문자 비교해야해서 큰따옴표 쓰면 안됨
        {
            printw("a눌림!");
        }

        refresh(); // 화면 갱신

    }

    endwin();
    return 0;
}