#include <iostream>

int decimalToBinary(int decimal) {
    int binary = 0;
    int base = 1;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }

    return binary;
}

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    return decimal;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int conversionType;
    std::cout << "Выберите направление конверсии (10 -> 2: (1), 2 -> 10: (2)): ";
    std::cin >> conversionType;

    int number;
    std::cout << "Введите число для конверсии: ";
    std::cin >> number;

    int result;

    if (conversionType == 1) {
        result = decimalToBinary(number);
        std::cout << "Результат конверсии: " << result << std::endl;
    }
    else if (conversionType == 2) {
        result = binaryToDecimal(number);
        std::cout << "Результат конверсии: " << result << std::endl;
    }
    else {
        std::cout << "Некорректный выбор направления конверсии." << std::endl;
    }

    return 0;
}
