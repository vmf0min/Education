/// Проект для работы в классе.

#include <iostream>

int main() {
/// Задачи урока 9.2
#pragma region Задача 1. Начальник.
/// Напишите программу для робота-начальника. Он спрашивает у пользователя, выполнил
/// ли он задания, которые выдавал вчера, и продолжает это делать до тех пор,
/// пока тот не ответит ему “Да, конечно, сделал”.
/// Подсказка: строки можно сравнивать вот так: (answer == “Да, конечно, сделал”),
/// answer - переменная с типом std::string
/*
    std::string answer;

    do {
        std::cout << "Выполнил задание, которое я задал вчера? ";
        std::cin >> answer;
    } while ("Да" != answer);

    std::cout << "Выполнил.\n";
*/
#pragma endregion

#pragma region Задача 2. Купи слона.
/// Напишите программу-дразнилку “Купи слона”. Она спрашивает у пользователя, как
/// его зовут, затем отвечает “%username%, купи слона!”. Дальше, что бы он ни
/// говорил, она передразнивает: Все говорят “...”, а ты купи слона! Так повторяется
/// бесконечно.
/// Пример:
/// - Хорошо, давай куплю.
/// - Все говорят “Хорошо, давай куплю.”, а ты купи слона!
/*
    std::string username;
    std::string answer;

    std::cout << "Как тебя зовут? ";
    std::cin >> username;

    std::cin.ignore(20, '\n');
    std::cout << username << ", купи слона!\n";

    while ("q" != answer) {
        getline(std::cin, answer);
        std::cout << "Все говорят \"" << answer << ".\", а ты купи слона!\n";
    }
*/
#pragma endregion

#pragma region Задача 3. Таблица степеней.
/// Напишите программу, которая выводила бы N первых степеней числа К. Посмотрите,
/// что случится, если N или K будут достаточно большими.
/*
    int n, k;
    int nCount = 0, s = 1;

    std::cout << "Введите число: ";
    std::cin >> k;

    std::cout << "Введите количество 1 степеней: ";
    std::cin >> n;

    while (nCount <= n) {
        if (nCount == 0) {
            std::cout << "Число " << k << " в степени " << nCount << " равно " << s << "\n";
        } else
            std::cout << "Число " << k << " в степени " << nCount << " равно " << (s *= k) << "\n";
        nCount++;
    }
*/
#pragma endregion

#pragma region Задача 4. Напоминалка.
/// Василий — очень ответственный менеджер, но очень забывчивый. Иногда он пьет
/// воду несколько раз подряд, потому что забыл, что только что пил. Напишите
/// для него программу-напоминалку. В самом начале программа спрашивает, сколько
/// раз ему напомнить, а затем нужное количество раз выводит “Вы хотели не забыть
/// о чем-то”.
/// Усложнение: добавьте возможность ввести фразу-напоминалку, чтобы можно было напоминать о чем-то конкретном.
/*
    int notificationCount, i;

    std::string notification;

    std::cout << "Сколько раз Вам напоминать? ";
    std::cin >> notificationCount;

    std::cin.ignore(5, '\n');

    std::cout << "О чем вам напомнить? ";
    getline(std::cin, notification);
    std::cout << "\n";

    i = 0;
    while (i < notificationCount) {
        std::cout << "Вы хотели не забыть о " << notification << ".\n";
        i++;
    }
*/

#pragma endregion

#pragma region Задача 5. Банкомат 3.0.
/// В банке ПлюсПлюсБанк тестируют новую систему пин-кодов на банкоматы. Теперь
/// вместо фиксированного пин-кода пользователь должен ввести 4 числа. Если их
/// сумма оказывается равна 42, пользователь может продолжать работу. Напишите
/// программу, которая спрашивает у пользователя 4 числа и отвечает “Ввод корректный”,
/// если их сумма равна 42, и “Ввод некорректный, попробуйте еще раз” в противном
/// случае. Так повторяется бесконечно.
/*
    int a, b, c, d;

    do {
        std::cout << "Введите пин-код через пробел: ";
        std::cin >> a >> b >> c >> d;
    } while (42 != (a + b + c + d));

    std::cout << "\nПин-код введен верно!\n";
*/
#pragma endregion

#pragma region Задача 6. Сумма чисел.
/// У бухгалтера сломались счеты. Напишите программу, которая считала бы сумму
/// вводимых чисел. В начале у бухгалтера спрашивают, сколько чисел тот хочет
/// сложить, затем нужное количество раз просят ввести число и в конце выводят
/// получившуюся сумму.
/*
    int sum;   // Сумма вводимых чисел.
    int n;     // Количество чисел для суммы.
    int count; // Счетчик.

    std::cout << "Введите общее количество чисел для сложения: ";
    std::cin >> n;

    count = 0;
    while (count < n) {
        if (1 == n) {
            std::cout << "Общее количество чисел для сложения должно быть "
                         "минимум 2!\n";
            std::cout << "Введите общее количество чисел для сложения: ";
            std::cin >> n;

            continue;
        }
        std::cout << "Введите число: ";
        int x;
        std::cin >> x;
        sum += x;

        count++;
    }
    std::cout << "\nСумма = " << sum << "\n";
*/
#pragma endregion

/// Задачи урока 9.3
#pragma region Задача 1. Банкомат 4.0.
/// В банке ПлюсПлюсБанк решили улучшить новую систему пин-кодов на банкоматы.
/// Пользователям оказалось неудобно вводить 4 отдельных числа. Перепишите
/// программу так, чтобы пользователь вводил число любой длины, а дальше все то
/// же самое: если сумма цифр числа оказывается равна 42, пользователь может
/// продолжать работу.
/// Напишите программу, которая спрашивает у пользователя число и отвечает
/// “Ввод корректный”, если сумма его цифр равна 42, и “Ввод некорректный”
/// в противном случае. При этом у пользователя есть только одна попытка
/// ввести корректное число.

#pragma endregion

    return 0;
}
