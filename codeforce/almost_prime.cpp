#include <bits/stdc++.h>
using namespace std;
int primeFactors(int n)
{
    int b = 0;
    long long int cnt = 0;
    while (n % 2 == 0)
    {
        n = n / 2;
        cnt++;
    }
    if (cnt > 0)
    {
        b++;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        long long int cnt = 0;
        while (n % i == 0)
        {
            n = n / i;
            cnt++;
        }
        if (cnt > 0)
        {
            b++;
        }
    }
    if (n > 2)
    {
        b++;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    int countn = 0;
    for (int i = 1; i <= n; i++)
    {
        int prime_div = primeFactors(i);
        if (prime_div == 2)
        {
            countn++;
        }
    }
    cout << countn << endl;
    return 0;
}
