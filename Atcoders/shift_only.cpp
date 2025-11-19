#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector <ll> a(n);
    ll answer = LLONG_MAX;
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
        ll c = 0;
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            c++;
        }
        answer = min(answer, c);
    }
    cout << answer << endl;
}
s