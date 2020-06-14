#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, op;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
    return 0;
}
