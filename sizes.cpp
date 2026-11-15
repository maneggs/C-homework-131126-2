#include <iostream>

int main()
{
    std::cout << "int: " << sizeof(int) << '\n';
    std::cout << "double: " << sizeof(double) << '\n';
    std::cout << "char: " << sizeof(char) << '\n';
    std::cout << "bool: " << sizeof(bool) << '\n';

    return 0;
}

//В int содержится 32 бита (4 байта * 8 бит) из которых 1 бит уходит на знак числа,
//а оставшийся 31 бит позволяет закодировать 2^31 значений в каждую сторону (от -2 147 483 648 до 2 147 483 647)
