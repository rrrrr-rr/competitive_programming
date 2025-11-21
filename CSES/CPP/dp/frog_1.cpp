#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }    
    
    vector<ll> dp(N, 0); // 0 dp[1] 0 0 0 0 .. N
    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i < N; i++) { 
        dp[i] = min(
            dp[i - 1] + abs(h[i] - h[i - 1]), // dp[0] -> dp[2] 
            dp[i - 2] + abs(h[i] - h[i - 2])  // dp[0] -> dp[1] -> dp[2] 
        );
    }
    cout << dp[N - 1] << endl;
}