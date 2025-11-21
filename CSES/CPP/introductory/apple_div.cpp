#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main () {
    ll n;
    cin >> n;
    vector <ll> a(n);
    ll sum = 0;
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    
}
