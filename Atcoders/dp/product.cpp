#include <iostream>

using namespace std;
typedef long long ll;
int main() {
    ll a, b;
    cin >> a >> b;
    ll result = a * b;
    if (result % 2 == 0) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
}