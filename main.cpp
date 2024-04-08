#include <iostream>
#include <conio.h>
#include <windows.h>


constexpr int width = 40; // Удвоенная ширина поля
constexpr int height = 20; // Удвоенная высота поля

void drawPaddle(int x, int y) {
    // Позиционируемся в нужное место в консоли
    for (int i = 0; i < 4; i++) {
        std::cout << "\033[" << y + i << ";" << x << "H";
        std::cout << "|";
    }
}
void drawSecondPaddle(int x, int y) {
    for (int i = 0; i < 4; i++) {
        std::cout << "\033[" << y + i << ";" << x << "H";
        std::cout << "|";
    }
}
void drawBall(int x, int y) {
    std::cout << "\033[" << y << ";" << x << "H";
    std::cout << "o";
}

void drawField() {
    // Рисуем верхнюю границу поля
    for (int i = 0; i <= width + 1; i++)
        std::cout << "#";
    std::cout << std::endl;

    // Рисуем поле
    for (int i = 1; i <= height; i++) {
        std::cout << "|";
        for (int j = 1; j <= width; j++) {
            std::cout << " ";
        }
        std::cout << "|" << std::endl;
    }

    // Рисуем нижнюю границу поля
    for (int i = 0; i <= width + 1; i++)
        std::cout << "#";
}

int main() {
    // Очистим консоль перед началом рисования
    system("cls");

    // Скрываем заголовок консоли
    SetConsoleTitle(NULL);

    // Рисуем поле, ракетку и мяч
    drawField();
    drawPaddle(5, 5);
    drawBall(10, 10);
    drawSecondPaddle(width - 5, 5);
    // Ожидание нажатия клавиши перед закрытием
    std::cin.get();

    return 0;
}
