#include <iostream>
#include <string>

using namespace std;
typedef long long ll;

int main() {
    string num;
    cin >> num;
    ll counter = 0;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] == '1') {
            counter += 1;
        }
    }
    cout << counter << endl;
}