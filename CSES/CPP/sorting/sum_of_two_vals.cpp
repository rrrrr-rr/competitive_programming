#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main() {
    ll n; ll x;
    std::cin >> n >> x;

    std::vector <ll> a(n);
    std::vector <ll> index(n);
    for (int i = 0; i < a.size(); i++) {
        std::cin >> a[i];
        index[i] = i;
    }

    std::sort(index.begin(), index.end(),
          [&a](int i, int j) { return a[i] < a[j]; });

    ll l = 0; 
    ll r = n - 1;
    while (l < r) {
        ll sum = a[index[l]] + a[index[r]];
        
        if (sum == x) {
            std::cout << index[l] + 1 << " " << index[r] + 1 << std::endl;
            return 0;
        }
        if (sum < x) {
            l++;
        }
        else {
            r--;
        }
    }

    std::cout << "IMPOSSIBLE" << std::endl;
    return 0;
}