
#include <iostream>

int main(){
    int number;
    std::cout << "Enter a four-digit number: \n";
    std::cin >> number; //ввод числа пользователем
    while (number < 1000 || number > 9999) { //проверка является ли число четырёхзначным, если нет просим ввести заново
            std::cout << "Try again: \n";
            std::cin >> number;
        }
    std::cout << "The number is correct\n";

    int fourth = number % 10; //первая цифра числа
    int third = number / 10 % 10; //вторая цифра числа
    int second = number / 100 %10; //третья цифра числа
    int first = number / 1000; //четрёртая цифра числа

    if (first + second == third + fourth) {  // проверяем что сумма первых двух цифр равна сумме двух последних
        std::cout << "Number " << number << " is lucky "; // если да выводим что число счастливое
    }
    else {
        std::cout << "Number " << number<< " is unlucky"; // если нет, то не счастливое
    }
    return 0;
}
