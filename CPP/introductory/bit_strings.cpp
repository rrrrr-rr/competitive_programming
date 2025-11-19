#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; ++i)
        result *= base;
    return result;
}

int binpow(long long a, long long n) {
	long long res = 1;
	while (n) {
		if (n & 1) {
			res = (res * a);
		}
		a = (a * a);
		n >>= 1;
	}
	return res;
}
 
int main() {
    long long n;
    cin >> n;
    cout << binpow(2, n);
}