#include<bits/stdc++.h>
#define int long long

using namespace std;

using pll = pair<int, int>;

const int mod = 1e9 + 7;

void pujith22()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int mod_pow(int a, int e, int mod) {
    int res = 1;
    while (e) {
        if (e & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        e >>= 1;
    }
    return res;
}

int mod_inv(int x, int mod) {
    return mod_pow(x, mod - 2, mod);
}

vector<int> primes;

void sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

vector<pll> factorize(int x) {
    vector<pll> factors;
    for (int p : primes) {
        if (p * p > x) break;
        if (x % p == 0) {
            int cnt = 0;
            while (x % p == 0) {
                x /= p;
                cnt++;
            }
            factors.emplace_back(p, cnt);
        }
    }
    if (x > 1) {
        factors.emplace_back(x, 1);
    }
    return factors;
}

int binomial(int N, int e, int mod) {

    int num = 1;
    for (int i = 0; i < e; i++) {
        num = (num * ((N + i) % mod)) % mod;
    }
    int den = 1;
    for (int i = 1; i <= e; i++) {
        den = (den * i) % mod;
    }
    return num * mod_inv(den, mod) % mod;
}

int f(int N, int m, const vector<pll>& factors_B) {

    int res = 1;
    for (auto& [p, exp_B] : factors_B) {
        int exp_m = 0;
        int tmp = m;
        while (tmp % p == 0) {
            tmp /= p;
            exp_m++;
        }

        if (exp_m > 0) {
            res = (res * binomial(N, exp_m, mod)) % mod;
        }
    }
    return res;
}

void solve(int tc) {
    int N, A, B;
    cin >> N >> A >> B;

    vector<pll> factors_B = factorize(B);
    vector<int> divisors = {1};

    for (auto& [p, exp] : factors_B) {
        int sz = divisors.size();
        int pow_p = 1;
        for (int e = 1; e <= exp; e++) {
            pow_p *= p;
            for (int i = 0; i < sz; i++) {
                divisors.push_back(divisors[i] * pow_p);
            }
        }
    }

    int ans = 0;
    for (int d : divisors) {
        if (d <= A) {
            int f1 = f(N, d, factors_B);
            int f2 = f(N, B / d, factors_B);
            ans = (ans + f1 * f2) % mod;
        }
    }

    cout << "Case #" << tc << ": " << ans << "\n";
}

int32_t main()
{
    pujith22();

    sieve(1e7);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}
