#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if (p % a == 0 && q % b == 0)
        {
            int t = p / a;
            int s = q / b;
            int d = abs(t - s);
            if (d == 1 || t == s)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}