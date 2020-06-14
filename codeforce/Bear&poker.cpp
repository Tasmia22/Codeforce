    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll n;
        cin >> n;
        ll a[n+1],gcd;
        for (ll i = 0; i <n; i++)
        {
            cin >> a[i];
            if(i==0){
                     gcd = a[0];
                continue;
            }
            gcd = __gcd(gcd, a[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            ll remain = a[i] / gcd;
            while (remain > 1)
            {
                if (remain % 2 == 0)
                {
                    remain = remain / 2;
                }
                else if (remain % 3 == 0)
                {
                    remain = remain / 3;
                }
                else
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
