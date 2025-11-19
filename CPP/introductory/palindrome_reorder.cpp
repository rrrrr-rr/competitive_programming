#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string n;
    std::cin >> n;

    // AACABACAA
    // all chars should be even and only 1 char can be odd (1, 3, 5...)
    // it will be in the middle

    std::unordered_map<char, int> chars;
 
    for (char c : n) { 
        chars[c]++; 
    }
    
    return 0;
}