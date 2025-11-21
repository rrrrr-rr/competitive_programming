#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main() {
    string n;
    cin >> n;
 
    int current_run = 1;
    int max_run = 1;
    for (int i = 1; i < (int)n.length(); i++) {
        if (n[i] == n[i - 1]) {
            current_run++;
        }
        else {
            current_run = 1;
        } 
        if (current_run > max_run) {
            max_run = current_run;
        }
    }
    cout << max_run;
}