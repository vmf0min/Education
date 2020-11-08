/// Задача 6. Усложнение задачи про кирпич.
/// На уроке мы с вами писали программу для проверки, удастся ли засунуть кирпич данных размеров в данное прямоугольное
/// отверстие. Теперь представьте, что у вас имеется коробка размером A x B x C и другая коробка размером M x N x K.
/// Напишите программу, которая по шести данным числам A, B, C, M, N, K проверяет, можно ли первую коробку положить
/// внутрь второй. Разумеется, коробки можно как угодно переворачивать. Как обычно, постарайтесь сделать свою программу
/// по возможности лаконичнее.

#include <iostream>

int main() {
    int a, b, c; // размеры 1 коробки
    int m, n, k; // размеры 2 коробки

    std::cout << "Введите размер 1 коробки A, B, C: ";
    std::cin >> a >> b >> c;

    std::cout << "Введите размер 2 коробки M, N, K: ";
    std::cin >> m >> n >> k;

    //if (a < m && b < m && c < m || a < n && b < n && c < n || a < k && b < k && c < k)
    if (a < m && b < n && c < k || a < n && b < m && c < n || a < k && b < k && c < k)
        std::cout << "Можно.\n";
    else std::cout << "Нельзя.\n";

    return 0;
}
