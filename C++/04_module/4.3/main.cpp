/// Задача 3. Проверка на чётное число.

#include <iostream>

int main() {
    std::cout << "Задача 3. Проверка на чётное число.\n\n"
              << "Введите число: ";
    int a;
    std::cin >> a;

    // До этого решал другие задачи. Эта запись больше всего понравилась, когда нужно писать что-то короткое.
    std::cout << (a % 2 == 0 ? "Четное число\n" : "Нечетное число\n");

    return 0;
}