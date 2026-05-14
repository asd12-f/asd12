#include <iostream>

// Рекурсивное вычисление n-го числа Фибоначчи
// Последовательность: F(1)=0, F(2)=1, F(3)=1, F(4)=2, F(5)=3...
int fib(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 10;
    std::cout << fib(n) << std::endl;
    return 0;
}