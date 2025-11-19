#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector <int> first;
    std::vector <int> second;

    if (n % 4 == 0) {
        std::cout << "YES" << std::endl;
        for (int i = 1; i <= n; i += 4) {
            first.insert(first.end(), {i, i + 3});
            second.insert(second.end(), {i + 1, i + 2});
        }
        std::cout << first.size() << std::endl;
        for (int i = 0; i < first.size(); i++) {
            std::cout << first[i] << " ";
        }
        std::cout << std::endl << second.size() << std::endl;
        for (int i = 0; i < second.size(); i++) {
            std::cout << second[i] << " ";
        }
    }
    else if (n % 4 == 3) {
        std::cout << "YES" << std::endl;
        first.insert(first.end(), {1, 2});
        second.insert(second.end(), {3});

        for (int i = 4; i <= n; i += 4) {
            first.insert(first.end(), {i, i + 3});
            second.insert(second.end(), {i + 1, i + 2});
        }
        std::cout << first.size() << std::endl;
        for (int i = 0; i < first.size(); i++) {
            std::cout << first[i] << " ";
        }
        std::cout << std::endl << second.size() << std::endl;
        for (int i = 0; i < second.size(); i++) {
            std::cout << second[i] << " ";
        }
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}