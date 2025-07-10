#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

int main() {
    srand(time(0));
    int num = rand() % 10 + 1;
    int g;

    do {
        std::cout << "Guess the number (1 to 10): ";
        std::cin >> g;

        if (g > num) {
            std::cout << "Too high! Try again.\n";
        } else if (g < num) {
            std::cout << "Too low! Try again.\n";
        }
    } while (g != num);

    std::cout << "Congratulations! You guessed the number.\n";
    getch();
    return 0;
}