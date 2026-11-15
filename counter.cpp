#include <iostream>

int main()
{
    // Для корректного расчёта нужен тип long long (8 байт) и суффикс LL у литерала,
    // чтобы компилятор выполнял умножение в 64-битной разрядности, а не в int.
    long long milliseconds = 20LL * 365 * 24 * 3600 * 1000;

    std::cout << "Миллисекунд за 20 лет: " << milliseconds << '\n';

    return 0;
}
