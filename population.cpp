#include <iostream>

int main()
{
    long long city = 0;
    long long country = 0;

    std::cout << "Население города и страны: ";
    std::cin >> city >> country;

    long long total = city + country;
    long long earth = 8100000000LL;

    // Сообщение компилятора при попытке записи в int: warning: overflow in conversion from 'long long int' to 'int' (переполнение при преобразовании, число обрезается и становится отрицательным)
    std::cout << "Итого: " << total << '\n';
    std::cout << "Население Земли: " << earth << '\n';

    return 0;
}
