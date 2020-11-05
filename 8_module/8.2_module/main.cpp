/// Задача 2. Полет нормальный!
/// Напишите программу для аэропорта, проверяющую, правильным ли эшелоном летит самолет. Его скорость должна быть
/// в диапазоне от 750 до 850 км/ч, а высота — в диапазоне от 9 000 до 9 500 метров.

#include <iostream>

int main() {
    int speed, height;

    std::cout << "Введите скорость самолета: ";
    std::cin >> speed;

    std::cout << "Введите высоту самолета: ";
    std::cin >> height;

    if ((speed < 750 || speed > 850) || (height < 9000 || height > 9500))
        std::cout << "Летит не правильным эшелоном.\n";
    else std::cout << "Летит правильным эшелоном.\n";

    return 0;
}
