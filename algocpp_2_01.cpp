#include <iostream>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число n: ";
    int n = 0;
    std::cin >> n;
    std::cout << "Число Фибоначчи: " << fib(n) << std::endl;
    return 0;
}