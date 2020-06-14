#include <bits/stdc++.h>
#define MAX 32000
#define ll long long
using namespace std;
bitset<MAX>bs;
vector<int> p;
void sieve() {
   bs.set();
    bs[0]=bs[1]=0;
    p.push_back(2);
    for(ll i=3; i<=MAX; i+=2)
    {
        if(bs[i]){
            for(long long int j=i*i; j<=MAX; j+=2*i)
                bs[j]=0;
            p.push_back((int)i);
        }
    }
}

void segSieve (ll l, ll r) {
    bool isPrime[r-l+1];
    for (int i = 0; i < r - l + 1; ++i) isPrime[i] = true;
    if (l == 1) isPrime[0] = false;
    for (int i = 0; p[i]*p[i] <= r; ++i) {
        int currentPrime = p[i];
        ll base = (l/currentPrime)*currentPrime;
        if (base < l) base += currentPrime;
        for (ll j = base; j <= r; j += currentPrime) {
            isPrime[j-l] = false;
        }
        if (base == currentPrime) isPrime[base-l] = true;
    }
    for (int i = 0; i < r - l + 1; ++i) {
        if (isPrime[i]) cout << (i+l) << endl;
    }
    puts("");
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        segSieve(l, r);
    }

    return 0;
}
