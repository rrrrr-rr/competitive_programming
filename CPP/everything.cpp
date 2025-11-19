#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll binpow(ll a, ll b) {
    ll result = 1;
    while(b) {
        if (b & 1) 
        result = result * a;
        a = a * a;
        b >>= 1;
    }
    return result;
}

int modpower(int x, int n, int m) 
{
    if (n == 0) //base case 
        return 1%m; 
    ll u = modpower(x,n/2,m);  
    u = (u*u)%m;
    if (n%2 == 1) //when 'n' is odd
        u = (u*x)%m;
    return u;
}

vector<int> sieve(int n) {
    
    // creation of boolean array
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            
            // marking as false
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    
    vector<int> res;
    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            res.push_back(p);
        }
    }
    return res;
}
