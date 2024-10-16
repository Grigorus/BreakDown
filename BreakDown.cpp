#include <iostream>
#include <windows.h>
using namespace std;

// Функция, которая проверяет, была ли нажата комбинация клавиш "S" и "F"
bool checkExitCondition() {
    // Получаем состояние клавиш
    short sKeyState = GetAsyncKeyState('S');  // Состояние клавиши "S"
    short fKeyState = GetAsyncKeyState('F');  // Состояние клавиши "F"

    // Проверяем, были ли нажаты обе клавиши
    return (sKeyState & 0x8000) && (fKeyState & 0x8000);
}

int main() {
    setlocale(LC_ALL, "Rus");
    std:cout << "Программа начала работу. Нажмите 'S' и 'F' одновременно для выхода." << std::endl;

    // Бесконечный цикл считывания клавиш
    while (true) {
        // Проверяем условие выхода
        if (checkExitCondition()) {
            std::cout << "Нажаты клавиши 'S' и 'F'. Программа завершает работу." << std::endl;
            break;
        }

        // Ждем некоторое время перед следующей проверкой (опционально)
        Sleep(1000);  // Подключите <windows.h> для использования функции Sleep, если необходимо

        // Дополнительные операции могут быть добавлены здесь

        // Пример вывода текущего состояния программы
        std::cout << "Программа работает..." << std::endl;
    }

    return 0;
}
