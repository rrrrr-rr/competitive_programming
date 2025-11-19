#include <iostream>
#include <string>

typedef long long ll;
int main() {
    ll l = 0;
    ll r = 1e9;

    while (l + 1 < r) {
        ll mid = (l + r) / 2;
        std::cout << "? " << mid << std::endl;
        std::string answer;
        std::cin >> answer;
        if (answer == "NO") {
            r = mid;
        }
        else if (answer == "YES") {
            l = mid;
        }
    }
    std::cout << "! " << r;
    return 0;
}