#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string res = "3";
        if (n == 1)
        {
            cout << res << endl;
        }

        else
        {
            for (int i = 1; i <= n - 2; i++)
            {
                res.push_back('0');
            }
            res.push_back('3');
            cout << res << endl;
        }
    }
    return 0;
}