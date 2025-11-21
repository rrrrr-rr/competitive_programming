#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector <int> bills = {100, 20, 10, 5, 1};
    
    ll count = 0;
    for (int i = 0; i < bills.size(); i++) {
        while (n >= bills[i]) {
            n -= bills[i];
            count++;
        }
    }

    cout << count << endl;
}