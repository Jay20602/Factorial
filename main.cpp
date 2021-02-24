#include <iostream>

int fib ( int n) {
    if (n == 0) return 0;
    if (n==1) return 1;
    return fib(n-1) + fib (n-2);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    int m;
    int n;
    n = 10;
    m = fib ( 5);
    std ::cout << "fib(" << n << ")=" << m << std::endl;
    std::cout << "Bye for now." << std::endl;
    return 0;
}
