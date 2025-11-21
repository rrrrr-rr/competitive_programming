#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
typedef long long ll;

int main() {
    string n;
    cin >> n;

    unordered_map <char, int> chars;

    for (auto i : n) {
        chars[i]++;
    }

    bool flag = false;
    char middle = '\0';
    for (auto i : chars) {
        if (i.second % 2 == 1) {
            if(flag) {
                cout << "NO SOLUTION" << endl;
                break;
            }
            flag = true;
            middle = i.first;
        }
    }
    
    for (auto i : chars) {
        if (i.second % 2 == 0) {
            for (int j = 0; j < i.second / 2; j++){
                cout << i.first;
            }
        }
    }
    for (auto i : chars) {
        if (i.first == middle) {
            for (int j = 0; j < i.second; j++) {
                cout << i.first;
            }
        }
    }
    for (auto i : chars) {
        if (i.second % 2 == 0) {
            for (int j = 0; j < i.second / 2; j++){
                cout << i.first;
            }
        }
    }
}