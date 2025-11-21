#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    vector<int> a(n - 1);
    long long sum = 0;
    long long total;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        sum += a[i];
    }
 
    total = (long long) (n * (n + 1)) / 2;
    cout << (total - sum);
    return 0;
}