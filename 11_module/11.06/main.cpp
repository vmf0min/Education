/// Задача 6. Красный Марс 2.0
// С вашей помощью компания «Спейс Инжиниринг» успешно высадила марсоход на
// поверхность Красной планеты, и вас назначили его оператором! Чтобы система
// навигации работала исправно, был запущен GPS-спутник, измеряющий координаты
// марсохода. К сожалению, из-за непреодолимых трудностей работы в космосе,
// марсоход не удалось разместить ближе, чем на 0,001 а. е. (астрономических
// единиц) к спутнику. Тем не менее, необходимо учитывать координаты марсохода
// относительно спутника с точностью до метра. Напишите программу для управления
// марсоходом наподобие той, которую вы делали в задаче «Красный Марс», только
// теперь начальные координаты X и Y марсохода равны 0,001 а. е. и 0
// соответственно, а каждое нажатие W, S, A или D изменяет соответствующую
// координату на 1 метр. (1 а. е. — единица измерения расстояния, приблизительно
// равна 1,496e + 11 метров).
// Примечание: поверхность планеты считать плоской.

#include <iostream>

const float astronomicalUnit{1.496e11};

int main() {
    std::cout << "[Программа]: Марсоход начинает работу...\n"
              << "[Программа]: Для отключения Марсохода нажмите \"0\".\n";

    // Начальная позиция.
    float x = 0.001f * astronomicalUnit;
    float y{0.0};

    bool isPowerOff{};
    while (!isPowerOff) {
        char command{};

        std::cout << "[Программа]: Марсоход находится на позиции [" << x << ", "
                  << y << "], введите команду:\n";
        std::cout << "[Оператор]: ";
        std::cin >> command;

        switch (command) {
            case 'w' :
                y += 1.0f / astronomicalUnit;
                break;

            case 'a' :
                x -= 1.0f / astronomicalUnit;
                break;

            case 's' :
                y -= 1.0f / astronomicalUnit;
                break;

            case 'd' :
                x += 1.0f / astronomicalUnit;
                break;

            case '0' :
                isPowerOff = true;
                std::cout << "Выключение марсохода...\n";
                // Тут перейдет к дефолту и выполнится брейк.
            default :
                break;
        }
    }

    return 0;
}
