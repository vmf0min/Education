/// Задача 4. Майские — усложнение.
/// Добавьте возможность начать месяц с любого дня недели. Для этого вводится число — номер дня, с которого начинается
/// месяц. Убедитесь, что введенное число корректно.

/// Напишите программу-календарь для мая месяца. Она должна проверять введенный номер дня и сообщать, выходной этот день
/// или рабочий. Выходными считаются все субботы и воскресенья, а также даты с 1 по 5 число и с 8 по 10 число
/// включительно. Наш месяц всегда начинается с понедельника.

#include <iostream>

int main() {
    std::string days[]{"Понедельник.", "Вторник.", "Среда.", "Четверг.", "Пятница.",
                       "Выходной. Суббота", "Выходной. Воскресенье."};

    int day;        // День недели, который нужно найти
    int dayInWeek;  // Смещение в неделе
    int dayInMonth; // Введеное число

    std::cout << "С какого дня начинается месяц \"Май\" (1 -- 7): ";
    std::cin >> dayInWeek;

    if (dayInWeek == 0 || dayInWeek > 7) {
        std::cout << "Ошибка. День недели должен быть от 1 до 7";
        return -1;
    }
    // Для расчета уменьшаем на 1, т.к. смещения может и не быть. Запрашиваю с 1, потому что пользователю
    // будет понятней.
    dayInWeek--;

    std::cout << "Введите число в месяце \"Май\": ";
    std::cin >> dayInMonth;

    day = dayInMonth % 7 + dayInWeek;
    if (day > 7) day -= 7;      // Коррекитрую дату
    else if (day == 0) day = 7; // Когда месяц начинается с понедельника и чтобы правильно считался выходной.

    if (dayInMonth >= 1 && dayInMonth <= 5 || dayInMonth >= 8 && dayInMonth <= 10)
        std::cout << "Выходной. Праздник.\n";
    else if (day == 6 || day == 7) std::cout << (day == 6 ? days[5] : days[6]);
    else if (day == 0 || day > 31) std::cout << "В мае всего 31 день и отчет начинается с 1.\n";
    else std::cout << "Рабочий день. " << days[day - 1];

    return 0;
}
