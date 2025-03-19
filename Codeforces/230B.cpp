#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;
vector<bool> is_prime(MAX_N + 1, true);
unordered_set<long long> t_primes;

void preprocess() {
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i * i <= MAX_N; i++) {
        if (is_prime[i]) {
            for (long long j = i * i; j <= MAX_N; j += i)
                is_prime[j] = false;
        }
    }
    for (long long i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) {
            t_primes.insert(i * i); 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    preprocess();
    
    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        cout << (t_primes.count(x) ? "YES\n" : "NO\n");
    }
    return 0;
}
