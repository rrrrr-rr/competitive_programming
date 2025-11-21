#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector <long long> a(n);
    long long moves = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            moves += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << moves;
    return 0;
}