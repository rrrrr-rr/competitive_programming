#include <iostream>
#include <vector>
#include <utility>

typedef long long ll;

int main() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> movies;
    for (int i = 0; i < n; i++) {
        ll start; ll end;
        std::cin >> start >> end;
        movies.push_back(std::make_pair(start, end));
    }
    
    
    return 0;
}