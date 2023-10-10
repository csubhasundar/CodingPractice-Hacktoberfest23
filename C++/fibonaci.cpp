#include <iostream>

int main() {
    int n;
    std::cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    std::cin >> n;

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    std::cout << "Deret Fibonacci:";
    std::cout << " " << fib[0] << " " << fib[1];

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        std::cout << " " << fib[i];
    }

    std::cout << std::endl;
    return 0;
}
