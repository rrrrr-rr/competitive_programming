#include <iostream>
#include <vector>
#include <algorithm>
int binary(std::vector <int> &arr, int x);
int bisect_left(std::vector <int> &arr, int x);
int bisect_right(std::vector <int> &a, int x);

int main() {
    int n;
    std::cin >> n;

    std::vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());

    int q;
    std::cin >> q;
    while (q--) {
        long long l, r;
        std::cin >> l >> r;
        
        std::cout << bisect_right(arr, r) - bisect_left(arr, l) << std::endl;
    }
    /*
    for (int i = 0; i < q; i++) {
        int result = bisect_left(arr, numbers[i]);
        std::cout << result << std::endl;
    }
    */
    return 0;
}

int binary(std::vector <int> &arr, int x) {
    int l = 0;
    int r = arr.size();
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return -1;
}

int bisect_left(std::vector<int> &arr, int x) {
    int l = 0;
    int r = arr.size();
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return l;
}

int bisect_right(std::vector<int> &arr, int x) {
    int l = 0;
    int r = arr.size();
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= x) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return l;
}
