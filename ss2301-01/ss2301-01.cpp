#include <iostream>

template<typename T>
T minimum(T value) {
    return value;
}

template<typename T, typename... Args>
T minimum(T first, Args... args) {
    T rest = minimum(args...);
    return (first < rest) ? first : rest;
}

int main() {
    double result = minimum(3.2, 4.7, 2.1, 5.6);
    std::cout << "最小値: " << result << std::endl;

    return 0;
}
