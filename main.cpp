#include <iostream>

// Итеративное вычисление и вывод первых n чисел Фибоначчи
void fib(int n) {
    if (n <= 0) return;

    int a = 0;  // F(1)
    int b = 1;  // F(2)

    for (int i = 0; i < n; i++) {
        std::cout << a << std::endl;
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n = 10;
    fib(n);
    return 0;
}