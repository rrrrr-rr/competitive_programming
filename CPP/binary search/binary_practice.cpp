#include <iostream>
#include <cmath>

typedef long long ll;

bool check1(ll m, ll x) {
    return pow(m, 2) <= x;
}

int main() {
    ll x;
    std::cin >> x;

    ll l = 0; ll r = 1;
    while (check1(r, x)) {
        r *= 2;
    }
    
    while (l < r) {
        ll mid = (l + r + 1) / 2;
        if (check1(mid, x)) {
            l = mid;
        }
        else {
            r = mid - 1;
        }
    }
    std::cout << l;
}