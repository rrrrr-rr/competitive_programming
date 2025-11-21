#include <iostream>
#include <set>

int main() {
    long long n;
    std::cin >> n;
    std::set <long long> numbers = {};
    long long number; 
    for (int i = 0; i < n; i++) {
        std::cin >> number;
        numbers.insert(number);
    }
    number = 0;
    for (auto x : numbers) {
        number += 1;
    }
    std::cout << number << std::endl;
    return 0;
}