#include <iostream>
#include <string>

int main() {
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
    
    // g++ name.cpp -o app
}