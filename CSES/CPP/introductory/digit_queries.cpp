#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int q;
    cin >> q;
    vector <long long> array(q);
    for (int i = 0; i < q; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < q; i++) {
        long long k = array[i];

        long long length = 1;
        long long start = 1;
        long long digit = 9;

        while (k > length * digit) {
            k -= length * digit;
            length += 1;
            digit *= 10;
            start *= 10; 
        }
        long long index = (k - 1) / length;
        long long number = start + index;
        long long digit_of_number = (k - 1) % length;
        string result = to_string(number);
        cout << result[digit_of_number] << std::endl;
    }
    return 0;
}