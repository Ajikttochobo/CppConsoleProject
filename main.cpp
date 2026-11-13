#include <iostream>
#include <string>
#include <vector>
#include <ncurses.h>

std::vector<std::vector<std::string>> map(3, std::vector<std::string>(3, "."));

int main() {
    
    initscr();
    noecho(); 
    cbreak(); 
    
    /*
    std::string keyboardInput;

    while (true)
    {
        std::cin >> keyboardInput;
        
        if(keyboardInput == "a")
        {
            std::cout << "a 눌림" << std::endl;
        }
        else if(keyboardInput == "b")
        {
            std::cout << "b 눌림" << std::endl;
        }
    }
    */
    
    map[1][1] = "P";

    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <=2; j++)
        {
            std::cout << map[i][j] << " ";
        }

        std::cout << std::endl;
    }
    
    endwin();
    
    // g++ main.cpp -o app TODO 이 코드 컴파일하면 에러뜨는데 이거 해결하기
}