#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

typedef long long ll;

bool check(ll m, ll w, ll h, ll n) {
    if ((m / w) * (m / h) >= n) {
        return true;
    }
    return false;
}

bool check2(double m, const std::vector<ll>& a, ll k) {
    ll count = 0;
    for (int i = 0; i < a.size(); i++){
        count += (ll)(a[i] / m);
    }
    if (count >= k) {
        return true;
    }
    else {
        return false;
    }
}

bool check3() {
    ll k = 1;
    while (k <= n) {
        return false;
    }
    return true;
}

int main() {
    ll n;
    std::cin >> n;
    int x, y;
    std::cin >> x >> y;

    ll l = 0;
    
    return 0;
}