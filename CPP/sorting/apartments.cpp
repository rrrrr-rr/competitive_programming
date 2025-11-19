#include <iostream>
#include <vector>

typedef long long ll;

int main() {
    ll n; ll m; ll k;
    std::cin >> n >> m >> k;

    std::vector <ll> desire(n);
    std::vector <ll> app_size(m);

    for (int i = 0; i < desire.size(); i++) {
        std::cin >> desire[i];
    }
    for (int i = 0; i < app_size.size(); i++) {
        std::cin >> app_size[i];
    }
}